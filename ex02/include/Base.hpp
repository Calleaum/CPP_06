/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:47:00 by calleaum          #+#    #+#             */
/*   Updated: 2025/09/03 12:47:51 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ctime>
#include <cstdlib>
#include <iostream>

class A;
class B;
class C;

class Base
{
	public:
		virtual ~Base();
};

Base	*generate();
void	identify(Base *p);
void	identify(Base &p);