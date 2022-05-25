/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:20:07 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/04 22:20:08 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {

    int i;

    i = 0;
    while (i < 4)
    {
        this->_m[i] = NULL;
        i++;
    }
    // std::cout << "MateriaSource constructor called" << std::endl;
    return ;
}

MateriaSource::MateriaSource(MateriaSource const &src) {

    int i;

    i = 0;
    while (i < 4)
    {
        if (src._m[i])
            this->_m[i] = src._m[i];
        else
            this->_m[i] = NULL;
        i++;
    }
    return ;
}

MateriaSource::~MateriaSource(void) {

    // std::cout << "MateriaSource destructor called" << std::endl;
    return ;
}

void    MateriaSource::learnMateria(AMateria *m) {

    int i;
    
    i = 0; 
    while (_m[i] != NULL && i < 4)
        i++;
    if (i < 4)
        this->_m[i] = m;
    else if (m)
        delete m;
    return ;
}

AMateria*   MateriaSource::createMateria(std::string const &type) {

    int i;
    
    i = 0; 
    while (i < 4)
	{
        if (this->_m[i] != NULL && this->_m[i]->getType() == type)
            return (this->_m[i]->clone());
        i++;
    }
    return (NULL);
}

MateriaSource&  MateriaSource::operator=(MateriaSource const &rhs) {

    int i;
    
    i = 0;
    if (this != &rhs)
    {
        while (i < 4)
        {
            if (this->_m[i])
                this->_m[i] = rhs._m[i];
        }
    }
    return (*this);
}