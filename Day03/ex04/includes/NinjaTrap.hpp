/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:48:31 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/16 14:48:33 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class   NinjaTrap : public ClapTrap {

    public :

        NinjaTrap(const std::string name);
        NinjaTrap(NinjaTrap const &src);
        ~NinjaTrap(void);

        void    ninjaShoebox(FragTrap &trap);
        void    ninjaShoebox(ScavTrap &trap);
        void    ninjaShoebox(NinjaTrap &trap);
        
        NinjaTrap   &operator=(NinjaTrap const &rhs);

};

#endif