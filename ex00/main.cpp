/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:26:08 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/06 20:28:26 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(int argc, char const *argv[])
{
	Bureaucrat b1("Maximiliano", -23);
	Bureaucrat b2("Cayetano", 1000);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;

	std::cout << "--------------------\n\n";
	std::cout << "Let's increment grades\n\n";
	std::cout << "--------------------\n\n";
	for (size_t i = 0; i < 15; i++)
	{
		b2.incrementGrade();
		std::cout << b1 << std::endl;
		b1.decrementGrade();
		std::cout << b2 << std::endl;
	}
	std::cout << "\n--------------------\n\n";
	for (size_t i = 0; i < 20; i++)
	{
		b1.incrementGrade();
		std::cout << b1 << std::endl;
		b2.decrementGrade();
		std::cout << b2 << std::endl;
	}
	return 0;
}
