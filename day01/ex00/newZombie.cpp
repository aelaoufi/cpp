/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 00:15:46 by anass_elaou       #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/02/19 18:05:17 by aelaoufi         ###   ########.fr       */
=======
/*   Updated: 2023/02/20 18:35:00 by anass_elaou      ###   ########.fr       */
>>>>>>> 60806684c3032daad7a8e677e876e4c8af3cfc74
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie *newzombie = new Zombie(name);
    return (newzombie);
}