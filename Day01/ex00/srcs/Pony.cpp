/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:31:17 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/09 10:31:18 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void) : ears(2), eyes(2), legs(4), tail(1) {

    std::cout << "Class Pony created" << std::endl;
    return ;
}

Pony::~Pony(void) {

    std::cout << "Class Pony destroyed" << std::endl;
    return ;
}

void    Pony::initPony(void) {

    std::cout << std::endl << "                                   Creating pony" << std::endl;
    std::cout << "                              Init number of eyes : " << this->eyes << std::endl;
    std::cout << "                              Init number of ears : " << this->ears << std::endl;
    std::cout << "                              Init number of legs : " << this->legs << std::endl;
    std::cout << "                              Init number of tails : " << this->tail << std::endl;
    return ;
}