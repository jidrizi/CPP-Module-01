/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:43:05 by jidrizi           #+#    #+#             */
/*   Updated: 2025/04/17 00:19:26 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Zombie " << this->name << " created." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " destroyed." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
