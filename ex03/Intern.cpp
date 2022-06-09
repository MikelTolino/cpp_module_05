/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:51:14 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/09 16:05:35 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
	return;
}

Intern::~Intern()
{
	return;
}

Form *makeForm(std::string const form, std::string const target)
{
	Form *f;

try
{
	switch (expression)
	{
	case /* constant-expression */:
		/* code */
		break;

	default:
		break;
	}
}
catch(const Intern::ErrorFormUnknown &e)
{
	std::cout << e.what() << '\n';
}

}