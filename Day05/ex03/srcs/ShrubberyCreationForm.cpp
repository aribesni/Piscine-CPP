/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:53:31 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/09 13:53:32 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {

    // std::cout << "ShrubberyCreationForm constructor called" << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src.getName(), src.getToSign(), src.getToExec()) {

    this->_target = src._target;
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

    // std::cout << "ShrubberyCreationForm destructor called" << std::endl;
    return ;
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const {

    Form::execute(executor);
    std::ofstream   ofs(this->_target + "_shrubbery");
    ofs << "This is a tree in ascii" << std::endl;
    return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {

    this->_target = rhs._target;
    return (*this);
}