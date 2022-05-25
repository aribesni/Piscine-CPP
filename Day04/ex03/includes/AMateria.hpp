/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:09:04 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/30 16:09:05 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include "ICharacter.hpp"
# include <iostream>

class   ICharacter;

class   AMateria {

    public :

        AMateria(std::string const &type);
        AMateria(AMateria const &src);
        virtual ~AMateria(void);

        std::string const   &getType(void) const;
        unsigned int        getXP(void) const;

        virtual AMateria    *clone(void) const = 0;
        virtual void        use(ICharacter &target);

        AMateria    &operator=(AMateria const &rhs);

        std::string const   type;
    
    private :

        unsigned int        _xp;
};

#endif