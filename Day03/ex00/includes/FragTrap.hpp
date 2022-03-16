/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:37:34 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/09 15:37:35 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include <unistd.h>

class   FragTrap {

    public :

        FragTrap(std::string get_name);
        ~FragTrap(void);

        std::string     name;
        unsigned int    hit_points;
        unsigned int    max_hit_points;
        unsigned int    energy_points;
        unsigned int    max_energy_points;
        unsigned int    level;
        unsigned int    melee_attack_damage;
        unsigned int    ranged_attack_damage;
        unsigned int    armor_damage_reduction;

        void    rangedAttack(std::string const &target);
        void    meleeAttack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    vaulthunter_dot_exe(std::string const &target);

};

#endif