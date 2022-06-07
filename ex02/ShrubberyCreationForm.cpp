/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:05:31 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/07 13:26:43 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(Form const & form)
{
	std::ofstream file;

	if (form.getGradeToExecute() <= 137 && form.getGradeToSign() <= 145)
	{
		file.open(form.getName() + "_shrubbery");
		file << tree;
		file.close();
	}
	else
		std::cout << "You have no grade to create Shruberry Form\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return;
}
