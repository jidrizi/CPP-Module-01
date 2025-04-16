/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:21:13 by jidrizi           #+#    #+#             */
/*   Updated: 2025/04/17 00:20:35 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*JustForFunction = new Zombie("JustForFunction");

	JustForFunction->randomChump("Chumpy");
	delete JustForFunction;
	return (0);
}