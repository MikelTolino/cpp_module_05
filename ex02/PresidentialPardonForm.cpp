/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:05:18 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/07 13:28:32 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(Form & form)
{
	if (form.getGradeToSign() <= 25 && form.getGradeToExecute() <= 5)
	{
		std::cout << form.getName() << " has been pardoned by Zafod Beeblebrox.\n";
	}
	else
		std::cout << "You have no pardon here!\n";

}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return;
}
