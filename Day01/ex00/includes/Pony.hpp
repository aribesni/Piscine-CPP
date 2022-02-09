/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:31:24 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/09 10:31:25 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

# include <iostream>

class Pony {

    public :

        int ears;
        int eyes;
        int legs;
        int tail;
        Pony(void);
        ~Pony(void);
        void initPony(void);
};

#endif