/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:34:55 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/24 11:34:56 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain (void) {

    std::cout << "Class Brain created" << std::endl;
    adr = (void*)this;
    return ;
}

Brain::~Brain(void) {

    std::cout << "Class Brain destroyed" << std::endl;
    return ;
}

std::string   Brain::identify(void) const {

    std::stringstream   ptr;
 
    ptr << this->adr;
    return (ptr.str());
}