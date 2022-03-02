/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:52:32 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/24 11:52:33 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

# include <iostream>
# include "Brain.hpp"

class Human {

    public :

        Human(void);
        ~Human(void);
        const Brain MyBrain;
        std::string identify(void);
        const Brain getBrain(void);

};

#endif