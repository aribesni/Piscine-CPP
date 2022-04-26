/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:30:47 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/26 15:30:48 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>

template <typename T>
void    swap(T &a, T &b) {

    T   tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T const &   min(T const &a, T const &b) {

    return (a >= b ? b : a);
}

template <typename T>
T const &   max(T const &a, T const &b) {

    return (a <= b ? b : a);
}

#endif