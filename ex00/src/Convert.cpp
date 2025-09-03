/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 08:02:33 by calleaum          #+#    #+#             */
/*   Updated: 2025/09/03 11:46:46 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{}

Convert::Convert(const Convert &other)
{
	(void)other;
}

Convert::~Convert()
{}

Convert	&Convert::operator=(const Convert &other)
{
	(void)other;
	return(*this);
}

void Convert::convert(const std::string &input)
{
	char 	*endPtr;
	double	value = strtod(input.c_str(), &endPtr);	
	bool	isValidNumber = (endPtr != input.c_str());
	bool	hasOverflow = (errno == ERANGE);
	long	longValue = static_cast<long>(value);

	// to char
	std::cout << "char: ";
	if (!isValidNumber || longValue < CHAR_MIN || longValue > CHAR_MAX)
		std::cout << "Impossible";
	else if (!isprint(static_cast<char>(longValue)))
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(longValue) << "'";
	std::cout << std::endl;

	// to int
	std::cout << "int: ";
	if (!isValidNumber || longValue < INT_MIN || longValue > INT_MAX)
		std::cout << "Impossible";
	else
		std::cout << static_cast<int>(longValue);
	std::cout << std::endl;

	// to float
	std::cout << "float: ";
	if (!isValidNumber || hasOverflow || ((value < -FLT_MAX || value > FLT_MAX) && !std::isinf(value)))
		std::cout << "Impossible";
	else
	{
		float floatValue = static_cast<float>(value);
		if (floatValue == ceilf(floatValue) && !std::isinf(floatValue))
			std::cout << std::fixed << std::setprecision(0) << floatValue << ".0f";
		else
			std::cout << floatValue << "f";
	}
	std::cout << std::endl;

	// to double
	std::cout << "double: ";
	if (!isValidNumber || hasOverflow)
		std::cout << "Impossible";
	else
	{
		if (value == std::ceil(value) && !std::isinf(value))
			std::cout << std::fixed << std::setprecision(0) << value << ".0";
		else
			std::cout << value;
	}
	std::cout << std::endl;
}