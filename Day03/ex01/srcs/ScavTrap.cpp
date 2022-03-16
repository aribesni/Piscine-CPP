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

ScavTrap::ScavTrap(std::string get_name) : name(get_name), hit_points(100),
    max_hit_points(100), energy_points(50), max_energy_points(50), level(1),
    melee_attack_damage(20), ranged_attack_damage(15), armor_damage_reduction(3){

    std::cout << "ScavTrap constructor called" << std::endl;
    return ;
}

ScavTrap::~ScavTrap(void) {

    std::cout << "ScavTrap Destructor called" << std::endl;
    return ;
}

void    ScavTrap::rangedAttack(std::string const &target) {

    if (this->hit_points == 0)
        std::cout << "Ranged attack : no more hit points" << std::endl;
    else {
        
        std::cout << std::endl << "SC4V-TP " << this->name << " attacks " << target << " with a ranged attack causing " << this->ranged_attack_damage << " damage points !" << std::endl;
        std::cout << "-" << this->ranged_attack_damage << " hit points" << std::endl;
        if (this->hit_points - this->ranged_attack_damage <= 0) {
            
            this->ranged_attack_damage = this->hit_points;
            std::cout << "Minimum hit points amount reached" << std::endl;
        }
        this->hit_points -= this->ranged_attack_damage;
        std::cout << this->hit_points << " hit points left" << std::endl;
    }
    return ;
}

void    ScavTrap::meleeAttack(std::string const &target) {

    if (this->hit_points == 0)
        std::cout << "Melee attack : no more hit points" << std::endl;
    else {

        std::cout << std::endl << "SC4V-TP " << this->name << " attacks " << target << " with a melee attack causing "  << this->melee_attack_damage << " damage points !" << std::endl;
        std::cout << "-" << this->melee_attack_damage << " hit points" << std::endl;
        if (this->hit_points - this->melee_attack_damage <= 0) {
            
            this->melee_attack_damage = this->hit_points;
            std::cout << "Minimum hit points amount reached" << std::endl;
        }
        this->hit_points -= this->melee_attack_damage;
        std::cout << this->hit_points << " hit points left" << std::endl;
    }
    return ;
}

void    ScavTrap::takeDamage(unsigned int amount) {

    if (this->energy_points == 0)
        std::cout << "Take damage : no more energy points" << std::endl;
    else {
        
        std::cout << std::endl << "SC4V-TP " << this->name << " took " << amount - this->armor_damage_reduction << " damage points !" << std::endl;
        std::cout << "-" << amount - this->armor_damage_reduction << " energy points" << std::endl;
        if (this->energy_points - (amount - this->armor_damage_reduction) <= 0) {

            this->armor_damage_reduction = 0;
            amount = this->energy_points;
            std::cout << "Minimum hit points amount reached" << std::endl;
        }
        this->energy_points -= (amount - this->armor_damage_reduction);
        std::cout << this->energy_points << " energy points left" << std::endl;
    }
    return ;
}

void    ScavTrap::beRepaired(unsigned int amount) {

    if (this->energy_points == this->max_energy_points)
        std::cout << "Be repaired : maximum energy points amount reached" << std::endl;
    else {

        std::cout << std::endl << "SC4V-TP " << this->name << " gets repaired and gains " << amount << " energy points !" << std::endl;
        std::cout << "+" << amount << " energy points" << std::endl;
        if (this->energy_points + amount >= this->max_energy_points) {
            
            amount = this->max_energy_points - this->energy_points;
            std::cout << "Maximum energy points amount reached" << std::endl;
        }
        this->energy_points += amount;
        std::cout << this->energy_points << " energy points left" << std::endl;
    }
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