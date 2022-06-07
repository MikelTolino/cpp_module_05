/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:05:28 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/07 22:02:59 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _target;

public:
	RobotomyRequestForm(const std::string &);
	RobotomyRequestForm( void );
	RobotomyRequestForm(RobotomyRequestForm const &);
	RobotomyRequestForm & operator=(RobotomyRequestForm const & );
	~RobotomyRequestForm( void );
	void execute( const Bureaucrat & executor);
};

#endif