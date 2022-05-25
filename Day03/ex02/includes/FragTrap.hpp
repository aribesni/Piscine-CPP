/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:37:34 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/09 15:37:35 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"
# include <iostream>
# include <unistd.h>

class   FragTrap : public ClapTrap {

    public :

        FragTrap(const std::string name);
        FragTrap(FragTrap const &src);
        ~FragTrap(void);

        void    vaulthunter_dot_exe(std::string const &target);

        FragTrap    &operator=(FragTrap const &rhs);

};

#endif