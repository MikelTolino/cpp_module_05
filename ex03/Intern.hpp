/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:45:44 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/09 16:05:20 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>
#include <exception>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{

public:
	Intern(void);
	Intern(Intern const &);
	Intern &operator=(Intern const &);
	~Intern(void);
	Form *makeForm(std::string const form, std::string const target);
	class ErrorFormUnknown : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "Form is unknown";
		}
	};
};

#endif