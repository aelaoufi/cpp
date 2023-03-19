/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:31:33 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/03/19 16:11:48 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "No Idea XD !!!";
	std::cout << "Brain Default constructor\n";
}

Brain::Brain(std::string _ideas)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = _ideas;
	std::cout << "Brain parametric constructor\n";
}

Brain::Brain(const Brain &Brr)
{
	*this = Brr;
	std::cout << "Brain copy constructor\n";
}

Brain &Brain::operator=(const Brain &Brr)
{
	for (int i = 0; i < 100; i++)
	{
        this->ideas[i] = Brr.ideas[i];
    }
	std::cout << "Brain copy assignement operator\n";
	return (*this);
}

void	Brain::printSomeIdeas(void) const
{
	for (int i = 0; i < 5; i++)
		std::cout << ideas[i] << "\n";
}

Brain::~Brain()
{
	std::cout << "Brain Destructor\n";
}