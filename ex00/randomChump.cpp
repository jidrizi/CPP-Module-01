/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:53:13 by jidrizi           #+#    #+#             */
/*   Updated: 2025/04/17 00:16:28 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::randomChump(std::string name)
{
	Zombie	*NewZombie;
	
	NewZombie = this->newZombie(name);
	NewZombie->announce();
	delete NewZombie;
}
