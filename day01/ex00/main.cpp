/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:34:10 by anass_elaou       #+#    #+#             */
/*   Updated: 2022/12/23 02:18:20 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie nigga("test");
    nigga.announce();
    Zombie *zombie = newZombie("Anass");
    zombie->announce();
    delete(zombie);
    randomChump("3zizi");
    // ~Zombie();
    return (0);
}