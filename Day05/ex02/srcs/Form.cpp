/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:35:37 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/08 15:35:38 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int to_sign, int to_exec) : _name(name), _to_sign(to_sign), _to_exec(to_exec), _signed(false) {

    if (to_sign > 150 || to_exec > 150)
        throw Form::GradeTooLowException();
    if (to_sign < 1 || to_exec < 1)
        throw Form::GradeTooHighException();
    // std::cout << "Form constructor called" << std::endl;
    return ;
}

Form::Form(Form const &src) {

    (std::string)this->_name = src.getName();
    this->_to_sign = src.getToSign();
    this->_to_exec = src.getToExec();
    this->_signed = src.getSigned();
    return ;
}

Form::~Form(void) {

    // std::cout << "Form destructor called" << std::endl;
    return ;
}

std::string Form::getName(void) const {

    return (this->_name);
}

int Form::getToSign(void) const {

    return (this->_to_sign);
}

int Form::getToExec(void) const {

    return(this->_to_exec);
}

bool    Form::getSigned(void) const {

    return (this->_signed);
}

void    Form::beSigned(Bureaucrat *b) {

    if (b->getGrade() <= this->getToSign())
        this->_signed = true;
    else
        throw Form::GradeTooLowException();
    // b->signForm(this->_signed, this->getName());
}

void    Form::execute(Bureaucrat const &executor) const {

    if (this->_signed == 0)
        throw Form::NotSignedException();
    if (executor.getGrade() > this->getToExec())
        throw Form::GradeTooLowException();
    return ;
}

Form&   Form::operator=(Form const &rhs) {

    (std::string)this->_name = rhs.getName();
    this->_to_sign = rhs.getToSign();
    this->_to_exec = rhs.getToExec();
    this->_signed = rhs.getSigned();
    return (*this);
}

std::ostream    &operator<<(std::ostream &o, Form const &f) {

    if (f.getSigned() == 0)
        o << "Form : " << f.getName() << " level to sign : " << f.getToSign() << ", level to execute : " << f.getToExec() << " Not signed yet." << std::endl;
    else
        o << "Form : " << f.getName() << " level to sign : " << f.getToSign() << ", level to execute : " << f.getToExec() << " Is signed." << std::endl;
    return (o);
}