/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:48:28 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/26 17:48:29 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

# include <iostream>

template <typename T>
void    iter(T *adr, int size, void (*f)(T&)) {

    int i;

    i = 0;
    while (i < size)
    {
        f(adr[i]);
        i++;
    }
}

#endif