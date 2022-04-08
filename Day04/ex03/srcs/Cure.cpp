/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:46:49 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/31 15:46:50 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {

    // std::cout << "Cure constructor called" << std::endl;
    return ;
}

Cure::~Cure(void) {

    // std::cout << "Cure destructor called" << std::endl;
    return ;
}

AMateria*   Cure::clone(void) const {

    return (new Cure);
}

void    Cure::use(ICharacter &target) {

    std::cout << "* Heals " << target.getName() << "'s wounds *" << std::endl;
    return ;
}

Cure&   Cure::operator=(Cure const &rhs) {

    if (this != &rhs)
        AMateria::operator=(rhs);
    return (*this);
}