/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:02:23 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/08 12:02:24 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Intern  chad;
    Form    *rr;
    Form    *pp;
    Form    *sc;
    Form    *xx;

    rr = chad.makeForm("robotomy request", "bobby");
    pp = chad.makeForm("presidential pardon", "billy");
    sc = chad.makeForm("shrubbery creation", "dylan");
    xx = chad.makeForm("xxxxxx", "xxxx");

    Bureaucrat  doug("doug", 18);

    doug.signForm(rr);
    doug.signForm(pp);
    doug.signForm(sc);
    if (xx)
        doug.signForm(xx);
	return (0);
}