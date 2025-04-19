/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 02:09:36 by jidrizi           #+#    #+#             */
/*   Updated: 2025/04/19 06:33:33 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :_name(name), _weapon(weapon)
{
	std::cout << "(A made)" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "[A destroyed]" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their "
		<< this->_weapon.getType() << std::endl;
}
