/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 08:02:35 by calleaum          #+#    #+#             */
/*   Updated: 2025/09/03 15:05:42 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	int SIZE = 5;
	Base	*tab[SIZE];

	std::srand(std::time(0));
	std::cout << "Generation" << std::endl;
	
	for (int i = 0; i < SIZE; i++)
		tab[i] = generate();

	std::cout << "Pointers identification" << std::endl << std::endl;

	for (int i = 0; i < SIZE; i++)
		identify(tab[i]);

	std::cout << std::endl << "Refs identification" << std::endl << std::endl;

	for (int i = 0; i < SIZE; i++)
		identify(*tab[i]);
	for (int i = 0; i < SIZE; i++)
		delete tab[i];
	return 0;
}