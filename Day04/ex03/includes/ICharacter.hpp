/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:10:07 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/30 16:10:08 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H

# include "AMateria.hpp"
# include <iostream>

class   AMateria;

class   ICharacter {

    public :

        ICharacter(void) {};
        virtual ~ICharacter(void) {};
        virtual std::string const   &getName(void) const = 0;
        virtual void    equip(AMateria *m) = 0;
        virtual void    unequip(int idx) = 0;
        virtual void    use(int ixd, ICharacter &target) = 0;
};

#endif