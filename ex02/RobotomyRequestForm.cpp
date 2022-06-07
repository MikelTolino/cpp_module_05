/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:05:25 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/07 22:05:10 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "unistd.h"
#define NUM 10

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & form)
{
	*this = form;
	return;
}

RobotomyRequestForm::RobotomyRequestForm( void ) :
Form("RobotomyRequestForm", 72, 45), _target("")
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm( std::string const & target ) :
Form("RobotomyRequestForm", 72, 45), _target(target)
{
	return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return;
}

void RobotomyRequestForm::execute(Bureaucrat const &b)
{
	if (b.getGrade() <= this->getGradeToExecute())
	{
		for (size_t i = 0; i < NUM; i++)
		{
			std::cout << "\a" << std::endl;
			usleep(100000);
		}
		std::cout << this->_target << " has been robotomized successfully 50% of the time\n";
	}
	else
		std::cout << "Failure\n";

}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &form)
{
	this->_target = form._target;
	return (*this);
}
