/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:18:46 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/02/27 13:25:59 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av)
{
    if (ac < 4)
    {
        std::cout << "You need to enter an existing filename, a word to replace and to what\n";
        return (0); 
    }
    Replace_word(av[1], av[2], av[3]);
    return (0);
}