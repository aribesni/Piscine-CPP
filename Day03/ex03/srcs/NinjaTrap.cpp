/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:50:39 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/16 14:50:40 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0) {

    std::cout << "NinjaTrap constructor called" << std::endl;
    return ;
}

NinjaTrap::~NinjaTrap(void) {

    std::cout << "NinjaTrap destructor called" << std::endl;
    return ;
}

void    NinjaTrap::ninjaShoebox(FragTrap &trap) {

    std::cout << trap.getName() << std::endl;
    return ;
}

void    NinjaTrap::ninjaShoebox(ScavTrap &trap) {

    std::cout << trap.getName() << std::endl;
    return ;
}

void    NinjaTrap::ninjaShoebox(NinjaTrap &trap) {

    std::cout << trap.getName() << std::endl;
    return ;
}