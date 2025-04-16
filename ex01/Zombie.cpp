/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 00:28:58 by jidrizi           #+#    #+#             */
/*   Updated: 2025/04/17 01:54:52 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->name << " destroyed" << std::endl;
}

void Zombie::announce(int i)
{
	std::cout << this->name << i + 1 << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
