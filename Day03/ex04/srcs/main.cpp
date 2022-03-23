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
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main(void) {

    FragTrap    bob("X-WING");

    bob.rangedAttack("TB-TT");
    bob.meleeAttack("TR-TT");
    bob.takeDamage(15);
    bob.beRepaired(15);
    bob.vaulthunter_dot_exe("Ewok");
    
    ScavTrap    doug("Millennium Falcon");
    doug.rangedAttack("TB-TT");
    doug.meleeAttack("TR-TT");
    doug.takeDamage(10);
    doug.beRepaired(10);
    doug.challengeNewcomer();
    
    NinjaTrap   nick("Death Star");
    nick.ninjaShoebox(bob);
    nick.ninjaShoebox(doug);
    nick.ninjaShoebox(nick);

    SuperTrap   tim("Planet Killer");
    tim.rangedAttack("TB-TT");
    tim.meleeAttack("TR-TT");
    // tim.takeDamage(15);
    // tim.beRepaired(15);
    
    return (0);
}