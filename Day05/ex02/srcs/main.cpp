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
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat  *bob = new Bureaucrat("bob", 5);
    Form        *form_1 = new PresidentialPardonForm("manu");
    Form        *form_2 = new ShrubberyCreationForm("garden");

    try 
    {
        bob->signForm(form_1);
        bob->executeForm(*form_1);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }

    try
    {
        bob->gradeUp();
    }
    catch (std::exception &e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }

    try 
    {
        bob->signForm(form_1);
        bob->executeForm(*form_1);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }

    try 
    {
        bob->signForm(form_2);
        bob->executeForm(*form_2);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }

    // delete bob;
    // delete form_1;
    // delete form_2;
	return (0);
}