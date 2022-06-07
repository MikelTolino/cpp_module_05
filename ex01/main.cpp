/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:26:08 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/07 21:21:20 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(int argc, char const *argv[])
{
	std::cout << "\n-----------------------\n\n";
	Bureaucrat b3("Emiliano", 6);
	Bureaucrat b4("Juliano", 121);

	Form f1("Documento oficial del estado", 5, 3);
	Form f2("Documento Espacial", 100, 110);

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
