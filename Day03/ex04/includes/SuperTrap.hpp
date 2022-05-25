/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:07:42 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/17 14:07:43 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <iostream>

class   SuperTrap : public virtual FragTrap, public virtual NinjaTrap {

    public :

        SuperTrap(std::string name);
        SuperTrap(SuperTrap const &src);
        ~SuperTrap(void);

        using FragTrap::_hit_points;
        using FragTrap::_max_hit_points;
        using FragTrap::_ranged_attack_damage;
        using FragTrap::_armor_damage_reduction;
        // using FragTrap::rangedAttack;

        using NinjaTrap::_energy_points;
        using NinjaTrap::_max_energy_points;
        using NinjaTrap::_melee_attack_damage;
        // using NinjaTrap::meleeAttack;

        void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);

        SuperTrap   &operator=(SuperTrap const &rhs);

};

#endif