/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:27:57 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/15 20:28:01 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3) {

    std::cout << "ScavTrap constructor called" << std::endl;
    return ;
}

ScavTrap::~ScavTrap(void) {

    std::cout << "ScavTrap Destructor called" << std::endl;
    return ;
}

void    ScavTrap::challengeNewcomer(void) {

    int         i;
    std::string challenge[5] = {"Challenge 1", "Challenge 2", "Challenge 3", "Challenge 4", "Challenge 5"};

    srand(time(0));
    i = rand() % 5;
    std::cout << "New challenge for SC4V-TP : " << challenge[i] << std::endl;
    return ;
}