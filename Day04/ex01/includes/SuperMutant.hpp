/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:37:09 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/25 13:37:11 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

# include "Enemy.hpp"
# include <iostream>

class   SuperMutant : public Enemy {

    public :

        SuperMutant(void);
        ~SuperMutant(void);

        // virtual void takeDamage(int i);
};

#endif