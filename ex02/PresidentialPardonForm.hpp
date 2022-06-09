/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:05:22 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/09 13:58:49 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP
#include "Form.hpp"
#define SIGN 25
#define EXEC 5

class PresidentialPardonForm : public Form
{
private:
	std::string _target;

public:
	PresidentialPardonForm(const std::string );
	PresidentialPardonForm( void );
	PresidentialPardonForm(PresidentialPardonForm const &);
	PresidentialPardonForm & operator=(PresidentialPardonForm const & );
	~PresidentialPardonForm( void );
	void execute(Bureaucrat const & executor) const;
};

#endif