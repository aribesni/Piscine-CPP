/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:07:04 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/15 20:07:05 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>

class   ScavTrap {

    public :

        ScavTrap(std::string get_name);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap(void);

        void    rangedAttack(std::string const &target);
        void    meleeAttack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    challengeNewcomer(void);

        ScavTrap    &operator=(ScavTrap const &rhs);

        private :

            std::string     name;
            unsigned int    hit_points;
            unsigned int    max_hit_points;
            unsigned int    energy_points;
            unsigned int    max_energy_points;
            unsigned int    level;
            unsigned int    melee_attack_damage;
            unsigned int    ranged_attack_damage;
            unsigned int    armor_damage_reduction;
};

#endif