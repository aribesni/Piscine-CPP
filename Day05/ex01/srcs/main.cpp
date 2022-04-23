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

int main(void) {

    Form    loan("loan", 20, 10);

    Bureaucrat  *bob = new Bureaucrat("bob", 25);

    try
    {
        loan.beSigned(bob);
    }
    catch(Form::GradeTooLowException &e) {
        std::cout << "GradeTooLowException" << std::endl;
    }

/*
    try 
    {
        Bureaucrat  bob("bob", 0);
    }
    catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << "GradeTooLowException" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << "GradeTooHighException" << std::endl;
	}

    Bureaucrat  doug("doug", 20);

    std::cout << doug;

    doug.gradeUp();
    std::cout << doug;

    doug.gradeDown();
    std::cout << doug;
*/
    return (0);
}