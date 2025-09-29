/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 08:02:35 by calleaum          #+#    #+#             */
/*   Updated: 2025/09/29 13:57:14 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage : " << argv[0] << " char" << std::endl;
		return 0;
	}
	Convert::convert(argv[1]);
}