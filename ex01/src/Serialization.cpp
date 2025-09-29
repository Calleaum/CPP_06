/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 11:56:39 by calleaum          #+#    #+#             */
/*   Updated: 2025/09/29 13:57:24 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization()
{
}
Serialization::~Serialization()
{
}
Serialization::Serialization(const Serialization &other)
{
	(void)other;
}
Serialization	&Serialization::operator=(const Serialization &other)
{
	(void)other;
	return *this;
}

uintptr_t	Serialization::serialize(Data *data)
{
	return (reinterpret_cast<uintptr_t>(data));
}

Data	*Serialization::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}