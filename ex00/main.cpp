/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:26:08 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/31 20:49:30 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
	Bureaucrat b1("Maximiliano", MIN + 10);
	Bureaucrat b2("Cayetano", MAX - 10);

	for (size_t i = 0, i < 15; i++)
	{
		b1.decrementGrade();
		std::cout << b1;
		b2.incrementGrade();
		std::cout << b2;
	}
	return 0;
}
