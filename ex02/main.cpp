/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:26:08 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/07 22:45:24 by mmateo-t         ###   ########.fr       */
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

	f1.beSigned(b1);
	f1.execute(b1);

/* 	f1.beSigned(b2);
	f1.execute(b2); */

	f2.beSigned(b1);
	f2.execute(b1);

/* 	f2.beSigned(b2);
	f2.execute(b2); */

	f3.beSigned(b1);
	f3.execute(b1);

/* 	f3.beSigned(b2);
	f3.execute(b2); */

	return 0;
}
