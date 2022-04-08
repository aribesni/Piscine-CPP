/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:05:41 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/30 10:05:42 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {

    std::cout << "Tactical Marine ready for action !" << std::endl;
    return ;
}

TacticalMarine::~TacticalMarine(void) {

    std::cout << "Aaargh..." << std::endl;
    return ;
}

ISpaceMarine*   TacticalMarine::clone(void) const {

    return (new TacticalMarine);
}

void    TacticalMarine::battleCry(void) const {

    std::cout << "For the Holy PLOT !" << std::endl;
    return ;
}

void    TacticalMarine::rangedAttack(void) const {

    std::cout << "* attacks with a bolter *" << std::endl;
    return ;
}

void    TacticalMarine::meleeAttack(void) const {

    std::cout << "* attacks with a chainsword *" << std::endl;
    return ;
}