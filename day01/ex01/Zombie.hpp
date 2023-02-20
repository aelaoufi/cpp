/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:45:28 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/02/20 19:31:54 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie
{
	std::string name;

	public :
		Zombie();
		Zombie(std::string name);
		~Zombie();
		std::string GetName(void);
		void announce(void);
};

Zombie*    zombieHorde(int N, std::string name);