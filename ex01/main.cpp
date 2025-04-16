/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 00:25:26 by jidrizi           #+#    #+#             */
/*   Updated: 2025/04/17 01:55:23 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	JustForFunction;
	Zombie	*Horde;

	Horde = JustForFunction.zombieHorde(5, "Buster");
	delete[] Horde;
	return (0);
}