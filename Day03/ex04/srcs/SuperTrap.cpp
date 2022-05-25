/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:07:34 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/17 14:07:35 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name) {

    std::cout << "SuperTrap constructor called" << std::endl;
    return ;
}

SuperTrap::SuperTrap(SuperTrap const &src) : FragTrap(src), NinjaTrap(src) {

    std::cout << "Copy constructor called" << std::endl;
}

SuperTrap::~SuperTrap(void) {

    std::cout << "SuperTrap destructor called" << std::endl;
    return ;
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

SuperTrap&   SuperTrap::operator=(SuperTrap const &rhs) {

    (void)rhs;
    return (*this);
}