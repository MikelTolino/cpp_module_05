/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:05:35 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/07 13:36:10 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>

class Form;


std::string const tree = "                      		\n"
"                                  # #### #### \n"
"                                ### /#|### |/#### \n"
"                               ##//#/ /||/##/_/##/_# \n"
"                             ###  //###|/ // # ### \n"
"                           ##_/_#/_/## | #/###_/_#### \n"
"                          ## #### # / #| /  #### ##/## \n"
"                           __#_--###`  |{,###---###-~ \n"
"                                     / }{ \n"
"                                      }}{ \n"
"                                      }}{ \n"
"                                      {{} \n"
"                                , -=-~{ .-^- _ \n"
"                                      `} \n"
"                                       {\n";

class ShrubberyCreationForm
{

public:
	ShrubberyCreationForm(const Form &);
	~ShrubberyCreationForm();
};

#endif