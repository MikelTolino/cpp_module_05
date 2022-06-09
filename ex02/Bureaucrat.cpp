/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:26:04 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/09 15:30:43 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		if (grade < 1)
		{
			this->_grade = 1;
			std::cout << "Grade set to 1 by default\n";
			throw Bureaucrat::GradeTooHighException();
		}
		else if (grade > 150)
		{
			this->_grade = 150;
			std::cout << "Grade set to 150 by default\n";
			throw Bureaucrat::GradeTooLowException();
		}
		else
			this->_grade = grade;
	}
	catch (GradeTooLowException &e)
	{
		std::cout << e.what() << '\n';
	}
	catch (GradeTooHighException &e)
	{
		std::cout << e.what() << '\n';
	}
}

Bureaucrat::~Bureaucrat()
{
	return;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::decrementGrade()
{
	try
	{
		if (this->_grade >= MAX)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade++;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
}

void Bureaucrat::incrementGrade()
{
	try
	{
		if (this->_grade <= MIN)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}

Bureaucrat::Bureaucrat(Bureaucrat &b)
{
	*this = b;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat &b)
{
	this->_grade = b._grade;
	return (*this);
}

Bureaucrat::Bureaucrat( void ) : _name("Nameless"), _grade(MAX)
{
	return;
}

bool Bureaucrat::signForm(Form & f)
{
	if (this->_grade <= f.getGradeToSign())
	{
		std::cout << this->_name << " signs " << f.getName() << std::endl;
		f.beSigned(*this);
		return true;
	}
	else
	{
		std::cout << this->getName() << " cannot sign " << f.getName()
		<< " because has no grade\n";
	}
	return false;
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		if (!form.isSigned())
		{
			throw Form::FormIsNotSigned();
			return;
		}
		if (form.execute(*this))
			std::cout << this->_name << " executes form " << form.getName() << std::endl;
	}
	catch(Form::FormIsNotSigned &e)
	{
		std::cout << e.what() << '\n';
	}
	return;
}