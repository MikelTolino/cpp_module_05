/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:05:18 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/07 22:17:06 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & form)
{
	*this = form;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( void ) :
Form("PresidentialPardonForm", SIGN, EXEC), _target("")
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm( std::string const & target ) :
Form("PresidentialPardonForm", SIGN, EXEC), _target(target)
{
	return;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return;
}

void PresidentialPardonForm::execute(Bureaucrat const &b)
{
	if (b.getGrade() <= this->getGradeToExecute())
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox.\n";
	else
		std::cout << "You have no pardon here!\n";
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &form)
{
	this->_target = form._target;
	return (*this);
}