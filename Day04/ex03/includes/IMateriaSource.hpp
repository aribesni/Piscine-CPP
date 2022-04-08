/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:10:35 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/30 16:10:36 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

# include "AMateria.hpp"
# include <iostream>

class   IMateriaSource {

    public :

        virtual ~IMateriaSource(void) {};
        virtual void    learnMateria(AMateria*) = 0;
        virtual AMateria    *createMateria(std::string const &type) = 0;
};

#endif