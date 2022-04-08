/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:09:40 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/30 16:09:42 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"
# include <iostream>

class   Character : public ICharacter {

    public :
        
        Character(std::string name);
        virtual ~Character(void);

        virtual std::string const   &getName(void) const;
        virtual void    equip(AMateria *m);
        virtual void    unequip(int idx);
        virtual void    use(int ixd, ICharacter &target);

        Character   &operator=(Character const &rhs);

    private :

        std::string _name;
        AMateria    *_m[4];

};

#endif