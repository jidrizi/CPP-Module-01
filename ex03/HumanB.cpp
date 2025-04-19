/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 02:09:47 by jidrizi           #+#    #+#             */
/*   Updated: 2025/04/19 07:06:28 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon.setType("none");
	std::cout << "(B made)" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "[B destroyed]" << std::endl;
}

void	HumanB::attack(void)
{
	if (this->_weapon.getType() == "none")
		std::cout << this->_name << " has no weapon" << std::endl;
	else
	{
		std::cout << this->_name << " attacks with their "
			<< this->_weapon.getType() << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
	std::cout << this->_name << " has a new weapon: "
		<< this->_weapon.getType() << std::endl;
}