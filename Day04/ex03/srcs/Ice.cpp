/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:38:07 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/31 15:38:08 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {

    // std::cout << "Ice constructor called" << std::endl;
    return ;
}

Ice::Ice(Ice const &src) : AMateria(src) {

    return ;
}

Ice::~Ice(void) {

    // std::cout << "Ice destructor called" << std::endl;
    return ;
}

AMateria*   Ice::clone(void) const {

    return (new Ice);
}

void    Ice::use(ICharacter &target) {

    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return ;
}

Ice&    Ice::operator=(Ice const &rhs) {

    if (this != &rhs)
        AMateria::operator=(rhs);
    return (*this);
}