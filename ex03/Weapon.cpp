/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 02:10:06 by jidrizi           #+#    #+#             */
/*   Updated: 2025/04/18 10:16:52 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "(Default Weapon made)" << std::endl;
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
	std::cout << "(Weapon made)" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "[Weapon destroyed]" << std::endl;
}

const std::string& Weapon::getType()
{
	const std::string& ref = this->_type;
	return (ref);
}