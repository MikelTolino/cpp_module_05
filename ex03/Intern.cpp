/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:51:14 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/09 19:00:22 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return;
}

Intern::~Intern()
{
	return;
}

Form *Intern::makeForm(std::string const form, std::string const target)
{
	Form *f[3];
	int n = -1;

	f[0] = new ShrubberyCreationForm(target);
	f[1] = new RobotomyRequestForm(target);
	f[2] = new PresidentialPardonForm(target);
	try
	{
		for (size_t i = 0; i < 3; i++)
		{
			if (f[i]->getName() == form)
				n = i;
		}
		if (n < 0)
			throw Intern::ErrorFormUnknown();
		else
			std::cout << "Intern creates " << f[n]->getName() << std::endl;
		for (size_t i = 0; i < 3; i++)
		{
			if (i != n)
				delete f[i];
		}
	}
	catch (const Intern::ErrorFormUnknown &e)
	{
		std::cout << e.what() << '\n';
	}
	return (f[n]);
}