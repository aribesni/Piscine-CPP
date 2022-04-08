/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:09:11 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/29 16:09:12 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_H
# define ISPACEMARINE_H

# include <iostream>

class   ISpaceMarine {

    public :

        virtual ~ISpaceMarine(void) {};
        virtual ISpaceMarine    *clone(void) const = 0;
        virtual void    battleCry(void) const = 0;
        virtual void    rangedAttack(void) const = 0;
        virtual void    meleeAttack(void) const = 0;
};

#endif