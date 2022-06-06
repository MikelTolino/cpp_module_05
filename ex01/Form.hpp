/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:30:54 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/06 23:36:50 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const _name;
	bool _signed;
	int const _gradeToSigned;
	int const _gradeToExecute;

public:
	Form(std::string const name, int const gradeToSigned, int const GradeToExecute);
	~Form();
	std::string getName(void) const;
	bool isSigned(void) const;
	int getGradeToExecute(void) const;
	int getGradeToSign(void) const;
	void beSigned(Bureaucrat &);
	struct GradeTooLowException : public std::exception
	{
		const char *what() const throw()
		{
			return "Grade is too low";
		}
	};

	struct GradeTooHighException : public std::exception
	{
		const char *what() const throw()
		{
			return "Grade is too high";
		}
	};
};

std::ostream &operator<<(std::ostream &os, const Form &);

#endif