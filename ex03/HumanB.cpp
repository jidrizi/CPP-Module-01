/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 02:09:47 by jidrizi           #+#    #+#             */
/*   Updated: 2025/04/19 07:20:00 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)
{
	if (this->_weapon->getType() == "none")
		std::cout << this->_name << " has no weapon" << std::endl;
	else
	{
		std::cout << this->_name << " attacks with their "
			<< this->_weapon->getType() << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;

}