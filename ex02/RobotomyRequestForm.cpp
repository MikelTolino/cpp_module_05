/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:05:25 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/07 13:45:29 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "unistd.h"
#define NUM 10

RobotomyRequestForm::RobotomyRequestForm(Form const & form)
{
	if (form.getGradeToExecute() <= 45 && form.getGradeToSign() <= 72)
	{
		for (size_t i = 0; i < NUM; i++)
		{
			std::cout << "\a" << std::endl;
			usleep(100000);
		}
		std::cout << form.getName() << " has been robotomized successfully 50% of the time\n";
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
