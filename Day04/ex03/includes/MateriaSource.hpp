/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:09:56 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/30 16:09:57 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

class   MateriaSource : public IMateriaSource {

    public :

        MateriaSource(void);
        virtual ~MateriaSource(void);
        virtual void    learnMateria(AMateria *m);
        virtual AMateria    *createMateria(std::string const &type);

        MateriaSource   &operator=(MateriaSource const &rhs);

    private :

        AMateria   *_m[4];

};


#endif