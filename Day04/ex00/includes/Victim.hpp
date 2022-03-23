/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:47:11 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/23 12:47:13 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

# include <iostream>

class   Victim {

    public :

        Victim(std::string get_name);
        ~Victim(void);

        std::string name;

        std::string getName(void) const;
        virtual void        getPolymorphed(void) const;

};

std::ostream    &operator<<(std::ostream &o, Victim const &rhs);

#endif
