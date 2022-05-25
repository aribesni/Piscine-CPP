/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:40:17 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/23 13:40:18 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

# include "Victim.hpp"
# include <iostream>

class   Peon : public Victim {

    public :

        Peon(std::string get_name);
        Peon(Peon const &src);
        ~Peon(void);

        std::string     name;
        virtual void    getPolymorphed(void) const;

        Peon    &operator=(Peon const &rhs);

};

#endif