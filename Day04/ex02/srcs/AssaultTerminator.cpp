/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:49:49 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/30 10:49:49 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {

    std::cout << "* teleports from space *" << std::endl;
    return ;
}

AssaultTerminator::~AssaultTerminator(void) {

    std::cout << "I'll be back..." << std::endl;
    return ;
}

ISpaceMarine*   AssaultTerminator::clone(void) const {

    return (new AssaultTerminator);
}

void    AssaultTerminator::battleCry(void) const {

    std::cout << "This code is unclean. Purify it !" << std::endl;
    return ;
}

void    AssaultTerminator::rangedAttack(void) const {

    std::cout << "* does nothing *" << std::endl;
    return ;
}

void    AssaultTerminator::meleeAttack(void) const {

    std::cout << "* attacks with chainfists *" << std::endl;
    return ;
}