/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:48:15 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/26 17:48:16 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void    ft_display(T& a) {

    std::cout << a;
}

int main(void) {

    ::iter("Hello World !\n", 14, ft_display);
    return (0);
}