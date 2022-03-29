/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:57:25 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/26 15:57:26 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main(void) {

    Character   *moi = new Character("moi");

    std::cout << *moi;

    Enemy   *b = new RadScorpion();
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();

    moi->equip(pr);
    std::cout << *moi;
    moi->equip(pf);

    moi->attack(b);
    std::cout << *moi;
    moi->equip(pr);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;

    return (0);
}