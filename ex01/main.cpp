/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:26:08 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/07 00:00:31 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(int argc, char const *argv[])
{
	Bureaucrat b1("Maximiliano", 5);
	Bureaucrat b2("Cayetano", 100);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;

	std::cout << "----------------------\n\n";
	std::cout << "Let's increment grades\n\n";
	std::cout << "----------------------\n\n";
	for (size_t i = 0; i < 15; i++)
	{
		b2.incrementGrade();
		std::cout << b1 << std::endl;
		b1.decrementGrade();
		std::cout << b2 << std::endl;
	}
	std::cout << "\n-----------------------\n\n";
	for (size_t i = 0; i < 20; i++)
	{
		b1.incrementGrade();
		std::cout << b1 << std::endl;
		b2.decrementGrade();
		std::cout << b2 << std::endl;
	}
	std::cout << "\n-----------------------\n\n";
	Bureaucrat b3("Emiliano", 6);
	Bureaucrat b4("Juliano", 121);

	Form f1("Documento oficial del estado", 5, 3);
	Form f2("Documento no oficial del estado", 100, 110);

	f1.beSigned(b3);
	f2.beSigned(b4);

	std::cout << "\n-----------------------\n\n";

	Bureaucrat b5("Lolito", 1);
	Bureaucrat b6("Juanito", 90);

	f1.beSigned(b5);
	f2.beSigned(b6);
	std::cout << "\n-----------------------\n\n";
	std::cout << f1;
	std::cout << f2;

	return 0;
}
