/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:48:46 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/29 16:48:47 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H

# include "ISquad.hpp"
# include <iostream>

typedef struct  s_squad {

    ISpaceMarine    *marine;
    struct s_squad    *next;

}               t_squad;

class   Squad : public ISquad {

    public :

        Squad(void);
        Squad(Squad const &src);
        virtual ~Squad(void);

        virtual int getCount(void) const;
        virtual ISpaceMarine    *getUnit(int nb) const;
        virtual int push(ISpaceMarine *recruit);

        t_squad *squad;

        Squad   &operator=(Squad const &rhs);
};

#endif