/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:30:57 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/07 13:38:53 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSigned, int GradeToExecute) : _name(name), _signed(false), _gradeToExecute(GradeToExecute), _gradeToSigned(gradeToSigned)
{
	return;
}

Form::~Form()
{
	return;
}

void Form::beSigned(Bureaucrat &b)
{
	try
	{
		if (b.getGrade() <= this->_gradeToSigned)
			this->_signed = true;
		else
			throw Form::GradeTooLowException();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	b.signForm(*this);
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << form.getName();
	if (form.isSigned())
		os << ", is signed\n";
	else
		os << ", is not signed\n";
	os << "Needs a grade to be signed: " << form.getGradeToSign() << "\n";
	os << "And needs a grade to be executed: " << form.getGradeToExecute() << "\n";
	return os;
}

int Form::getGradeToExecute(void) const
{
	return this->_gradeToExecute;
}

std::string Form::getName(void) const
{
	return this->_name;
}

int Form::getGradeToSign(void) const
{
	return this->_gradeToSigned;
}

bool Form::isSigned(void) const
{
	return this->_signed;
}

void Form::execute(Bureaucrat const &executor) const
{
	try
	{
		if (this->_signed)
		{
			ShrubberyCreationForm(*this);
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
