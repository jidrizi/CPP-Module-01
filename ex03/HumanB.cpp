/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 02:09:47 by jidrizi           #+#    #+#             */
/*   Updated: 2025/04/18 09:56:06 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = Weapon("No Weapon");
	std::cout << "(B made)" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "[B destroyed]" << std::endl;
}

// this is different from the attack in HumanA because HumanB can sometimes
// not have a weapon
void	HumanB::attack(void)
{
	if (this->_weapon.getType() == "No Weapon")
	{
		std::cout << this->_name << " cannot attack because they have no weapon"
			<< std::endl;
	}
	else
	{
		std::cout << this->_name << " attacks with their "
			<< this->_weapon.getType() << std::endl;
	}
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
	std::cout << this->_name << " has a new weapon: "
		<< this->_weapon.getType() << std::endl;
}