/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:26:08 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/09 19:13:20 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(int argc, char const *argv[])
{
	Bureaucrat b1("Maximiliano", 5);
	Bureaucrat b2("Cayetano", 140);
	Intern  someRandomIntern;
	Form*   rrf;

	rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
	b1.signForm(*rrf);
	b1.executeForm(*rrf);
	delete rrf;

	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Yen");
	b1.signForm(*rrf);
	b1.executeForm(*rrf);
	delete rrf;

	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Jaime");
	b1.signForm(*rrf);
	b1.executeForm(*rrf);
	delete rrf;

	std::cout << std::endl;


	//FIXME: PETA por culpa de puntero NULL
	rrf = someRandomIntern.makeForm("UnknowForm", "Elias");
	b1.signForm(*rrf);
	b1.executeForm(*rrf);
	delete rrf;

	return 0;
}
