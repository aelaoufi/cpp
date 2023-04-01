/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 01:52:39 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/04/01 20:08:52 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	Form frm1("Form1", 50, 50);
	Form frm2("Form2", 100, 100);
	Form frm3("Form3", 200, 200);
	
	Bureaucrat cc1("Buro1", 40);
	Bureaucrat cc2("Buro2", 101);

	std::cout << frm1;
	std::cout << frm2;
	
	frm1.beSigned(cc1);
	frm2.beSigned(cc2);
	
	cc1.signForm(frm1);
	cc2.signForm(frm2);
	
	std::cout << frm1;
	std::cout << frm2;
	
}