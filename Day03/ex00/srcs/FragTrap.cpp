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

FragTrap::FragTrap(std::string get_name) : name(get_name), hit_points(100),
    max_hit_points(100), energy_points(100), max_energy_points(100), level(1),
    melee_attack_damage(30), ranged_attack_damage(20), armor_damage_reduction(5) {

    std::cout << "Constructor called" << std::endl;
    return ;
}

FragTrap::~FragTrap(void) {

    std::cout << "Destructor called" << std::endl;
    return ;
}

void    FragTrap::rangedAttack(std::string const &target) {

    if (this->hit_points == 0)
        std::cout << "Ranged attack : no more hit points" << std::endl;
    else {
        
        std::cout << std::endl << "FR4G-TP " << this->name << " attacks " << target << " with a ranged attack causing " << this->ranged_attack_damage << " damage points !" << std::endl;
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

void    FragTrap::meleeAttack(std::string const &target) {

    if (this->hit_points == 0)
        std::cout << "Melee attack : no more hit points" << std::endl;
    else {

        std::cout << std::endl << "FR4G-TP " << this->name << " attacks " << target << " with a melee attack causing "  << this->melee_attack_damage << " damage points !" << std::endl;
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

void    FragTrap::takeDamage(unsigned int amount) {

    if (this->energy_points == 0)
        std::cout << "Take damage : no more energy points" << std::endl;
    else {
        
        std::cout << std::endl << "FR4G-TP " << this->name << " took " << amount - this->armor_damage_reduction << " damage points !" << std::endl;
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

void    FragTrap::beRepaired(unsigned int amount) {

    if (this->energy_points == this->max_energy_points)
        std::cout << "Be repaired : maximum energy points amount reached" << std::endl;
    else {

        std::cout << std::endl << "FR4G-TP " << this->name << " gets repaired and gains " << amount << " energy points !" << std::endl;
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

void    FragTrap::vaulthunter_dot_exe(std::string const &target) {

    int i;
    std::string funny_attack[5] = {"Funny attack 1", "Funny attack 2", "Funny attack 3", "Funny attack 4", "Funny attack 5"};
    srand(time(0));
    i = rand() % 5;
    if (this->energy_points == 0)
        std::cout << "Vault hunter : no more energy points" << std::endl;
    else {

        std::cout <<std::endl << funny_attack[i] << " on " << target << std::endl;
        if (this->hit_points - 25 <= 0) {

            std::cout << "Minimum hit points amount reached" << std::endl;
            this->hit_points = 0;
        }
        std::cout << "-25 hit points" << std::endl;
        std::cout << this->hit_points << " hit points left" << std::endl;
    }
    return ;
}
