/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:09:28 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/30 16:09:29 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"
# include <iostream>

class   Cure : public AMateria {

    public :

        Cure(void);
        Cure(Cure const &src);
        virtual ~Cure(void);

        virtual AMateria    *clone(void) const;
        virtual void        use(ICharacter &target);

        Cure    &operator=(Cure const &rhs);
    
    private :

        // std::string const   _type;

};

#endif