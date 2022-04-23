/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:54:07 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/09 13:54:08 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target) {

    // std::cout << "RobotomyRequestForm constructor called" << std::endl;
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {

    // std::cout << "RobotomyRequestForm destructor called" << std::endl;
    return ;
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const {

    Form::execute(executor);
    std::cout << "* trtrtrtrtrtrtrtr *    " << this->_target << " has been robotomised" << std::endl;
    return ;
}