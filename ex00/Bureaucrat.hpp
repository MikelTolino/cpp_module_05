/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:26:06 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/07 20:46:34 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define MAX 150
#define MIN 1
#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;

public:
	Bureaucrat(std::string, int);
	Bureaucrat(Bureaucrat &);
	~Bureaucrat();
	Bureaucrat();
	Bureaucrat & operator=(Bureaucrat &);
	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	class GradeTooLowException : public std::exception
	{
		public:
		const char *what() const throw()
		{
			return "Grade is too low";
		}
	};

	class GradeTooHighException : public std::exception
	{
		public:
		const char *what() const throw()
		{
			return "Grade is too high";
		}
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &);

#endif
