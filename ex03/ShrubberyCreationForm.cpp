/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:05:31 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/09 15:31:25 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &form) : Form("ShrubberyCreationForm", 145, 137), _target(form._target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("")
{
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return;
}

bool ShrubberyCreationForm::execute(Bureaucrat const &b) const
{
	std::ofstream file;
	std::string filename = this->_target + "_shrubbery";

	try
	{
		if (b.getGrade() <= this->getGradeToExecute())
		{
			file.open(filename);
			file << tree;
			file.close();
			return true;
		}
		else
		{
			std::cout << "You have no grade to execute Shruberry Form\n";
			throw Form::GradeTooLowException();
		}
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << '\n';
	}
	return false;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &form)
{
	this->_target = form._target;
	return (*this);
}