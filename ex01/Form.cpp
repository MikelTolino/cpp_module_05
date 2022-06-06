/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:30:57 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/06 21:07:34 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSigned, int GradeToExecute) :
_name(name), _signed(false), _gradeToExecute(GradeToExecute), _gradeToSigned(gradeToSigned)
{
	return;
}

Form::~Form()
{
	return;
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() >= this->_gradeToSigned)
	{
		this->_signed = true;
	}
	else
		throw Form::GradeTooLowException();
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
