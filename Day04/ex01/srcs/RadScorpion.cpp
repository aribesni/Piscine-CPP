/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:42:35 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/26 16:42:36 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "Rad Scorpion") {

    std::cout << "* click click click *" << std::endl;
    return ;
}

RadScorpion::RadScorpion(RadScorpion const &src) : Enemy(src) {

    return ;
}

RadScorpion::~RadScorpion(void) {

    std::cout << "* SPROTCH *" << std::endl;
    return ;
}

RadScorpion&    RadScorpion::operator=(RadScorpion const &rhs) {

    this->_hp = rhs.getHP();
    this->_type = rhs.getType();
    return (*this);
}
