/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:49:33 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/29 16:49:35 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H

# include "ISpaceMarine.hpp"
# include <iostream>

class   AssaultTerminator : public ISpaceMarine {

    public :

        AssaultTerminator(void);
        virtual ~AssaultTerminator(void);
        virtual ISpaceMarine    *clone(void) const;
        virtual void    battleCry(void) const;
        virtual void    rangedAttack(void) const;
        virtual void    meleeAttack(void) const;
};

#endif