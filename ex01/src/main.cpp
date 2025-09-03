/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 08:02:35 by calleaum          #+#    #+#             */
/*   Updated: 2025/09/03 12:00:40 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
	Data	data;

	data.x = 945823;
	data.y = 252824;
	data.z = 23497824;

	Data	*data_ptr(&data);
	std::cout << "Pre-Serialization" << std::endl;
	std::cout << "x: " << data_ptr->x << std::endl;
	std::cout << "y: " << data_ptr->y << std::endl;
	std::cout << "z: " << data_ptr->z << std::endl;

	std::cout << std::endl;

	uintptr_t	serialized(Serialization::serialize(data_ptr));
	Data		*deserialized(Serialization::deserialize(serialized));

	std::cout << "Post-Serialization" << std::endl;
	std::cout << "x: " << deserialized->x << std::endl;
	std::cout << "y: " << deserialized->y << std::endl;
	std::cout << "z: " << deserialized->z << std::endl;
}