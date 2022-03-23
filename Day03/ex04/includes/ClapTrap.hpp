/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:19:50 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/16 11:19:51 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class   ClapTrap {

    public :

        ClapTrap(const std::string name, unsigned int hit_points, unsigned int max_hit_points,
        unsigned int energy_points, unsigned int max_energy_points, unsigned int level,
        unsigned int melee_attack_damage, unsigned int ranged_attack_damage,
        unsigned int armor_damage_reduction);
        ~ClapTrap(void);

        void        rangedAttack(std::string const &target);
        void        meleeAttack(std::string const &target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        std::string getName(void);

    protected :

        std::string     _name;
        unsigned int    _hit_points;
        unsigned int    _max_hit_points;
        unsigned int    _energy_points;
        unsigned int    _max_energy_points;
        unsigned int    _level;
        unsigned int    _melee_attack_damage;
        unsigned int    _ranged_attack_damage;
        unsigned int    _armor_damage_reduction;

};

#endif