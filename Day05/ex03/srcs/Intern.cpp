/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:57:40 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/10 11:57:41 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {

    std::cout << "Intern constructor called" << std::endl;
    return ;
}

Intern::~Intern(void) {

    std::cout << "Intern destructor called" << std::endl;
    return ;
}

Form*   Intern::makeForm(std::string form, std::string target) {

    t_search_form   form_array[3];
    int             i;

    i = 0;
    form_array[0].name = "presidential pardon";
    form_array[0].new_form = new PresidentialPardonForm(target);
    form_array[1].name = "shrubbery creation";
    form_array[1].new_form = new ShrubberyCreationForm(target);
    form_array[2].name = "robotomy request" ;
    form_array[2].new_form = new RobotomyRequestForm(target);
    while (i < 3) 
    {
        if (form == form_array[i].name)
            return (form_array[i].new_form);
        i++;
    }
    std::cout << "Form requested not found" << std::endl;
    return (NULL);
}