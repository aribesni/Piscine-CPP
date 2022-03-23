/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:37:14 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/09 15:37:15 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {

    {
        FragTrap    bob("X-WING");

        bob.rangedAttack("TB-TT");
        bob.meleeAttack("TR-TT");
        bob.takeDamage(15);
        bob.beRepaired(15);
        bob.vaulthunter_dot_exe("Ewok");
    }
    {
        ScavTrap    doug("Millennium Falcon");
        doug.rangedAttack("TB-TT");
        doug.meleeAttack("TR-TT");
        doug.takeDamage(10);
        doug.beRepaired(10);
        doug.challengeNewcomer();
    }
    return (0);
}