/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 11:14:38 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/10 00:29:04 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {

    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade = grade;
    std::cout << "Bureaucrat contructor called" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {

    this->_name = src.getName();
    this->_grade = src.getGrade();
    return ;
}

Bureaucrat::~Bureaucrat(void) {

    std::cout << "Bureaucrat destructor called" << std::endl;
    return ;
}

std::string Bureaucrat::getName(void) const {

    return (this->_name);
}

int Bureaucrat::getGrade(void) const {
    
    return (this->_grade);
}

void    Bureaucrat::gradeUp(void) {

    if (this->_grade > 1)
    {
        this->_grade -= 1;
        std::cout << "Grade up, new grade : " << this->getGrade() << std::endl;
    }
    else
        throw Bureaucrat::GradeTooHighException();
}

void    Bureaucrat::gradeDown(void) {

    if (this->_grade < 150)
    {
        this->_grade += 1;
        std::cout << "Grade down, new grade : " << this->getGrade() << std::endl;
    }
    else
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs) {

    this->_name = rhs.getName();
    this->_grade = rhs.getGrade();
    return (*this);
}

std::ostream&   operator<<(std::ostream &o, Bureaucrat const &rhs) {

    o << rhs.getName() << " bureaucrat grade " << rhs.getGrade() << std::endl;
    return (o);
}
