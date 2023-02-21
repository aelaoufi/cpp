/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 23:47:14 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/02/19 15:58:42 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
	std::string name;

	public :
		Zombie(std::string name);
		std::string GetName(void);
		void announce(void);
		~Zombie();
	
};

void    randomChump(std::string name);
Zombie  *newZombie(std::string name);

#endif