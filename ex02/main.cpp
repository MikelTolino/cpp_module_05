/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:26:08 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/09 15:39:27 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(int argc, char const *argv[])
{
	Bureaucrat b1("Maximiliano", 5);
	Bureaucrat b2("Cayetano", 140);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;

	ShrubberyCreationForm f1("home");
	PresidentialPardonForm f2("Juanito");
	RobotomyRequestForm f3("Mechanic");

	b1.signForm(f1);
	b2.executeForm(f1);
	b1.executeForm(f1);

	std::cout << "\n-----------------------\n";

	b2.signForm(f2);
	b2.executeForm(f2);

	std::cout << "\n-----------------------\n";

	b1.signForm(f2);
	b1.executeForm(f2);

	std::cout << "\n-----------------------\n";

	b1.executeForm(f3);
	b1.signForm(f3);
	b1.executeForm(f3);

	return 0;
}
