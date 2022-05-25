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
	Bureaucrat* bob = new Bureaucrat("bob", 150);
	Bureaucrat* jimmy = new Bureaucrat("jimmy", 1);
	PresidentialPardonForm* form;
	ShrubberyCreationForm* shrubForm = new ShrubberyCreationForm("forest");
	RobotomyRequestForm* roboform = new RobotomyRequestForm("Bill Potts");

	try
	{
		form = new PresidentialPardonForm("Daphne");
	}
	catch (std::exception & e)
	{
		std::cout << "Exception " << e.what() << std::endl;
	}
	std::cout << *form << std::endl;
	std::cout << *shrubForm << std::endl;
	std::cout << *roboform << std::endl;
	std::cout << *bob << std::endl;
	std::cout << *jimmy << std::endl;

	try
	{
		bob->gradeUp();
		jimmy->gradeDown();
	}
	catch (std::exception & e)
	{
		std::cout << "Exception " << e.what() << std::endl;
	}
	std::cout << *bob << std::endl;
	std::cout << *jimmy << std::endl;

	try
	{
		jimmy->gradeUp();
		bob->gradeUp();
		bob->gradeUp();
	}
	catch (std::exception & e)
	{
		std::cout << "Exception " << e.what() << std::endl;
	}
	std::cout << *bob << std::endl;
	std::cout << *jimmy << std::endl;
	bob->signForm(form);
	jimmy->signForm(form);
	std::cout << *form << std::endl;

	bob->executeForm(*form);
	jimmy->executeForm(*form);


	bob->executeForm(*roboform);
	jimmy->executeForm(*roboform);

	bob->signForm(roboform);
	jimmy->signForm(roboform);

	bob->executeForm(*shrubForm);
	bob->signForm(shrubForm);
	jimmy->signForm(shrubForm);

	try
	{
		int j = 0;
		while (j++ < 20)
			bob->gradeDown();
	}
	catch (std::exception & e)
	{
		std::cout << "Exception " << e.what() << std::endl;
	}

	bob->executeForm(*shrubForm);

	bob->executeForm(*roboform);
	jimmy->executeForm(*roboform);
	jimmy->executeForm(*roboform);
	jimmy->executeForm(*roboform);
	jimmy->executeForm(*roboform);


	std::cout << "\n-------Last-Part--------\n" << std::endl;

	Intern* nameless = new Intern;

	Form* creation;
	creation = nameless->makeForm("blue", "black");
	creation = nameless->makeForm("robotomy request", "red");
	std::cout << *creation << std::endl;
	jimmy->executeForm(*creation);
	jimmy->signForm(creation);
	jimmy->executeForm(*creation);

	delete (bob);
	delete (jimmy);
	delete (form);
	delete (roboform);
	delete (shrubForm);
	delete (creation);
	delete (nameless);
	return (0);
}