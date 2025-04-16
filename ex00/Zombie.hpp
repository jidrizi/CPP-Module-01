/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:39:05 by jidrizi           #+#    #+#             */
/*   Updated: 2025/04/17 00:01:48 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>


class Zombie
{
	private:
		std::string name;

	public:
					Zombie(std::string name);
					~Zombie(void);
		void		announce(void);
		Zombie*		newZombie(std::string name);
		void		randomChump(std::string name);
};

#endif