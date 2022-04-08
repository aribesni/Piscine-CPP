/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:02:51 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/29 16:02:52 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_H
# define ISQUAD_H

# include "ISpaceMarine.hpp"
# include <iostream>

class   ISquad {

    public :

        virtual ~ISquad(void) {};
        virtual int getCount(void) const = 0;
        virtual ISpaceMarine    *getUnit(int) const = 0;
        virtual int push(ISpaceMarine*) = 0;
};

#endif