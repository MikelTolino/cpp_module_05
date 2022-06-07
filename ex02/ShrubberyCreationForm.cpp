/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:05:31 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/07 22:04:29 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &form) :
Form("ShrubberyCreationForm", 145, 137), _target(form._target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm() :
Form("ShrubberyCreationForm", 145, 137), _target("")
{
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return;
}

void ShrubberyCreationForm::execute(Bureaucrat const &b)
{
	std::ofstream file;
	std::string filename = this->_target + "_shrubbery";

	if (b.getGrade() <= this->getGradeToExecute())
	{
		file.open(filename);
		file << tree;
		file.close();
	}
	else
		std::cout << "You have no grade to create Shruberry Form\n";
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &form)
{
	this->_target = form._target;
	return (*this);
}