/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:54:40 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/09 13:54:41 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target) {

    // std::cout << "PresidentialPardonForm contructor called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src.getName(), src.getToSign(), src.getToExec()) {

    this->_target = src._target;
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {

    // std::cout << "PresidentialPardonForm destructor called" << std::endl;
    return ;
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const {

    Form::execute(executor);
    std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
    return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {

    this->_target = rhs._target;
    return (*this);
}