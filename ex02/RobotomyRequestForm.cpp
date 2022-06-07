/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:05:25 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/07 12:45:50 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "unistd.h"

RobotomyRequestForm::RobotomyRequestForm(Form & form)
{
	if (form.getGradeToExecute() <= 45 && form.getGradeToSign() <= 72)
	{
		for (size_t i = 0; i < 10; i++)
		{
			std::cout << "\a \a \a";
			usleep(10000);
		}
		std::cout << form.getName() << "  has been robotomized successfully 50% of the time";
	}
	else
		std::cout << "Failure\n";
}

RobotomyRequestForm::RobotomyRequestForm()
{
	return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return;
}
