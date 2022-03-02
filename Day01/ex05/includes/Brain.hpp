/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:31:47 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/24 11:31:48 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <sstream>

class Brain {

    public :

        void    *adr;
        
        Brain(void);
        ~Brain(void);
        std::string identify(void) const;

};

#endif