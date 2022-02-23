/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:20:14 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/11 12:20:15 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void) {

    // std::cout << "Class created" << std::endl;
    return ;
}

Zombie::~Zombie (void) {

    // std::cout << "Class destroyed" << std::endl;
    return ;
}

void    Zombie::advert(std::string name, std::string type) {

    std::cout << "\033[1m\033[32m" << name << " " << "(" << type << ")";
    std::cout << " : Braiiiiiinnnssss ..." << "\033[0m" << std::endl;
    return ;
}