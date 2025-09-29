/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 11:56:02 by calleaum          #+#    #+#             */
/*   Updated: 2025/09/29 13:57:21 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>
#include "Data.h"

class Serialization
{
	private:
		Serialization();
		Serialization(const Serialization &other);
		Serialization	&operator=(const Serialization &other);
	public:
		~Serialization();
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
};