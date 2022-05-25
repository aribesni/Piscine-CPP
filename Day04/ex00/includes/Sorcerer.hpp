/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:44:38 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/22 14:44:39 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

# include "Victim.hpp"
# include <iostream>

class   Sorcerer {

    public :

        Sorcerer(std::string get_name, std::string get_type);
        Sorcerer(Sorcerer const &src);
        ~Sorcerer(void);

        std::string name;
        std::string type;

        std::string getName(void) const;
        std::string getType(void) const;

        void        polymorph(Victim const &vic) const;

        Sorcerer    &operator=(Sorcerer const &rhs);

};

std::ostream    &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif