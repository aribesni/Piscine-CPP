/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:37:04 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/09 15:37:06 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5) {

    std::cout << "FragTrap constructor called" << std::endl;
    return ;
}

FragTrap::~FragTrap(void) {

    std::cout << "FragTrap destructor called" << std::endl;
    return ;
}

void    FragTrap::vaulthunter_dot_exe(std::string const &target) {

    int i;
    std::string funny_attack[5] = {"Funny attack 1", "Funny attack 2", "Funny attack 3", "Funny attack 4", "Funny attack 5"};
    srand(time(0));
    i = rand() % 5;
    if (this->_energy_points == 0)
        std::cout << "Vault hunter : no more energy points" << std::endl;
    else {

        std::cout <<std::endl << funny_attack[i] << " on " << target << std::endl;
        if (this->_hit_points - 25 <= 0) {

            std::cout << "Minimum hit points amount reached" << std::endl;
            this->_hit_points = 0;
        }
        std::cout << "-25 hit points" << std::endl;
        std::cout << this->_hit_points << " hit points left" << std::endl;
    }
    return ;
}
