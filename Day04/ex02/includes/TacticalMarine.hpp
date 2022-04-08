/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:49:03 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/29 16:49:05 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H

# include "ISpaceMarine.hpp"
# include <iostream>

class   TacticalMarine : public ISpaceMarine {

    public :

        TacticalMarine(void);
        virtual ~TacticalMarine(void);
        virtual ISpaceMarine    *clone(void) const;
        virtual void    battleCry(void) const;
        virtual void    rangedAttack(void) const;
        virtual void    meleeAttack(void) const;
};

#endif