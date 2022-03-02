/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:03:42 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/25 13:03:43 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {

    {
        Weapon  club = Weapon("crude spiked club");
        HumanA  bob("Bob", club);

        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon  club = Weapon("crude spiked club");
        HumanB  jim("Jim");

        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

    return (0);
}