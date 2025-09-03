/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 08:02:30 by calleaum          #+#    #+#             */
/*   Updated: 2025/09/03 11:00:50 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cmath>
#include <string>
#include <cerrno>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <climits>
#include <float.h>
#include <iomanip>
#include <iostream>
#include <math.h>

class Convert
{
	private:
		Convert();
		Convert(const Convert &other);
		Convert	&operator=(const Convert &other);

	public:
		~Convert();
		static void	convert(const std::string &input);
};