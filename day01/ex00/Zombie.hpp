/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 23:47:14 by anass_elaou       #+#    #+#             */
/*   Updated: 2022/12/23 02:10:53 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
	private :
		std::string name;

	public :
		Zombie(std::string name);
		~Zombie();
		std::string GetName(void);
		void announce(void);
	
};

void    randomChump(std::string name);
Zombie  *newZombie(std::string name);

#endif