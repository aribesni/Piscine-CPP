/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:52:35 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/15 13:31:44 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    memoryLeak(void) {

    std::string*    panthere = new std::string("String panthere");

    std::cout << *panthere << std::endl;
    delete panthere;
    return ;
}
