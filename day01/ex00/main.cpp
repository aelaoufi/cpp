/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:34:10 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/02/27 18:28:49 by aelaoufi         ###   ########.fr       */
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
    return (0);
}