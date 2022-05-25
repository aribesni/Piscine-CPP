/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:09:16 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/30 16:09:17 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"
# include <iostream>

class   Ice : public AMateria {

    public :

        Ice(void);
        Ice(Ice const &src);
        virtual ~Ice(void);

        virtual AMateria    *clone(void) const;
        virtual void        use(ICharacter &target);

        Ice     &operator=(Ice const &rhs);

};

#endif