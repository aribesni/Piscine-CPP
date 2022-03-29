/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:19:53 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/25 14:19:54 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
# define RADSCORPION_H

# include "Enemy.hpp"
# include <iostream>

class   RadScorpion : public Enemy {

    public :

        RadScorpion(void);
        ~RadScorpion(void);

        // virtual void takeDamage(int i);
};

#endif