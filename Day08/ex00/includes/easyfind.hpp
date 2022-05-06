/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 22:43:17 by aribesni          #+#    #+#             */
/*   Updated: 2022/05/01 22:43:18 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>

template <typename T>
int easyfind(T &t, int value) {

    typename T::iterator    itr;

    itr = t.begin();
    while (itr != t.end())
    {
        if (*itr == value)
            return (*itr);
        itr++;
    }
    throw std::exception();
}

#endif