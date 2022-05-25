/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:23:06 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/16 11:23:07 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, unsigned int hit_points, unsigned int max_hit_points,
    unsigned int energy_points, unsigned int max_energy_points, unsigned int level,
    unsigned int melee_attack_damage, unsigned int ranged_attack_damage,
    unsigned int armor_damage_reduction) : _name(name), _hit_points(hit_points),
    _max_hit_points(max_hit_points), _energy_points(energy_points),
    _max_energy_points(max_energy_points), _level(level),
    _melee_attack_damage(melee_attack_damage), _ranged_attack_damage(ranged_attack_damage),
    _armor_damage_reduction(armor_damage_reduction) {

    std::cout << "ClapTrap constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const &src) : _name(src._name), _hit_points(src._hit_points),
    _max_hit_points(src._max_hit_points), _energy_points(src._energy_points), _max_energy_points(src._max_energy_points),
    _level(src._level), _melee_attack_damage(src._melee_attack_damage), _ranged_attack_damage(src._ranged_attack_damage),
    _armor_damage_reduction(src._armor_damage_reduction) {

    std::cout << "Copy constructor called" << std::endl;
    return ;
}

ClapTrap::~ClapTrap(void) {

    std::cout << "ClapTrap destructor called" << std::endl;
    return ;
}

void    ClapTrap::rangedAttack(std::string const &target) {

    if (this->_hit_points == 0)
        std::cout << "Ranged attack : no more hit points" << std::endl;
    else {
        
        std::cout << std::endl << "FR4G-TP " << this->_name << " attacks " << target << " with a ranged attack causing " << this->_ranged_attack_damage << " damage points !" << std::endl;
        std::cout << "-" << this->_ranged_attack_damage << " hit points" << std::endl;
        if (this->_hit_points - this->_ranged_attack_damage <= 0) {
            
            this->_ranged_attack_damage = this->_hit_points;
            std::cout << "Minimum hit points amount reached" << std::endl;
        }
        this->_hit_points -= this->_ranged_attack_damage;
        std::cout << this->_hit_points << " hit points left" << std::endl;
    }
    return ;
}

void    ClapTrap::meleeAttack(std::string const &target) {

    if (this->_hit_points == 0)
        std::cout << "Melee attack : no more hit points" << std::endl;
    else {

        std::cout << std::endl << "FR4G-TP " << this->_name << " attacks " << target << " with a melee attack causing "  << this->_melee_attack_damage << " damage points !" << std::endl;
        std::cout << "-" << this->_melee_attack_damage << " hit points" << std::endl;
        if (this->_hit_points - this->_melee_attack_damage <= 0) {
            
            this->_melee_attack_damage = this->_hit_points;
            std::cout << "Minimum hit points amount reached" << std::endl;
        }
        this->_hit_points -= this->_melee_attack_damage;
        std::cout << this->_hit_points << " hit points left" << std::endl;
    }
    return ;
}

void    ClapTrap::takeDamage(unsigned int amount) {

    if (this->_energy_points == 0)
        std::cout << "Take damage : no more energy points" << std::endl;
    else {
        
        std::cout << std::endl << "FR4G-TP " << this->_name << " took " << amount - this->_armor_damage_reduction << " damage points !" << std::endl;
        std::cout << "-" << amount - this->_armor_damage_reduction << " energy points" << std::endl;
        if (this->_energy_points - (amount - this->_armor_damage_reduction) <= 0) {

            this->_armor_damage_reduction = 0;
            amount = this->_energy_points;
            std::cout << "Minimum hit points amount reached" << std::endl;
        }
        this->_energy_points -= (amount - this->_armor_damage_reduction);
        std::cout << this->_energy_points << " energy points left" << std::endl;
    }
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount) {

    if (this->_energy_points == this->_max_energy_points)
        std::cout << "Be repaired : maximum energy points amount reached" << std::endl;
    else {

        std::cout << std::endl << "FR4G-TP " << this->_name << " gets repaired and gains " << amount << " energy points !" << std::endl;
        std::cout << "+" << amount << " energy points" << std::endl;
        if (this->_energy_points + amount >= this->_max_energy_points) {
            
            amount = this->_max_energy_points - this->_energy_points;
            std::cout << "Maximum energy points amount reached" << std::endl;
        }
        this->_energy_points += amount;
        std::cout << this->_energy_points << " energy points left" << std::endl;
    }
    return ;
}

std::string ClapTrap::getName(void) {

    return (this->_name);
}

ClapTrap&   ClapTrap::operator=(ClapTrap const &rhs) {

    this->_name = rhs._name;
    this->_hit_points = rhs._hit_points;
    this->_max_hit_points = rhs._max_hit_points;
    this->_energy_points = rhs._energy_points;
    this->_max_energy_points = rhs._max_energy_points;
    this->_level = rhs._level;
    this->_melee_attack_damage = rhs._melee_attack_damage;
    this->_ranged_attack_damage = rhs._ranged_attack_damage;
    this->_armor_damage_reduction = rhs._armor_damage_reduction;
    return (*this);
}