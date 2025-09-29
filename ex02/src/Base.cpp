/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:46:52 by calleaum          #+#    #+#             */
/*   Updated: 2025/09/29 14:02:43 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}

Base	*generate()
{
	int	rand_val = std::rand() % 3;
	switch (rand_val)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		default:
			return new C();
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Error: Cannot identify type." << std::endl;
}

void	identify(Base &p)
{
	try
	{
    (void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (...)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (...)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch (...)
			{
				std::cout << "Error: Cannot identify type." << std::endl;
			}
		}
	}
}