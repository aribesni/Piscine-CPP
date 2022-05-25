/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:06:21 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/30 11:06:22 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) {

    this->squad = new t_squad;
    this->squad->marine = NULL;
    this->squad->next = NULL;
    // std::cout << "Squad constructor called" << std::endl;
    return ;
}

Squad::Squad(Squad const &src) {

    this->squad = src.squad;
    return ;
}

Squad::~Squad(void) {

    t_squad *temp;

    temp = NULL;
    while (temp)
    {
        temp = this->squad;
        this->squad = this->squad->next;
        delete temp->marine;
        delete temp;
    }
    // std::cout << "Squad destructor called" << std::endl;
    return ;
}

int Squad::getCount(void) const {

    int     count;
    t_squad *temp;

    count = 0;
    temp = this->squad;
    while (temp)
    {
        temp = temp->next;
        count++;
    }
    return (count);
}

ISpaceMarine*   Squad::getUnit(int nb) const {

    int     i;
    t_squad *temp;
    
    i = 0;
    temp = this->squad;
    while (i < nb)
    {
        temp = temp->next;
        i++;
    }
    return (temp->marine);
}

int Squad::push(ISpaceMarine *recruit) {

    int     i;
    t_squad *temp;

    i = 0;
    temp = this->squad;
    if (recruit == NULL)
        return (-1);
    if (temp->marine == NULL)
        temp->marine = recruit;
    else
    {
        while (temp->next)
        {
            temp = temp->next;
            i++;
        }
        temp->next = new t_squad;
        temp->next->marine = recruit;
        temp->next->next = NULL;
    }
    return (i);
}

Squad&  Squad::operator=(Squad const &rhs) {

    if (this != &rhs)
        this->squad = rhs.squad;
    return (*this);
}