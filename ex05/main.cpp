/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 12:35:10 by jidrizi           #+#    #+#             */
/*   Updated: 2025/04/19 14:13:28 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main() 
{
	Harl harl;

	std::cout << "Testing DEBUG:" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\nTesting INFO:" << std::endl;
	harl.complain("INFO");

	std::cout << "\nTesting WARNING:" << std::endl;
	harl.complain("WARNING");

	std::cout << "\nTesting ERROR:" << std::endl;
	harl.complain("ERROR");

	std::cout << "\nTesting UNKNOWN LEVEL:" << std::endl;
	harl.complain("RANDOM");

	return (0);
}