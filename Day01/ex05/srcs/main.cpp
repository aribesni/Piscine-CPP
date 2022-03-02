/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:48:14 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/24 11:48:15 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

int main(void) {

    Human   bob;

    std::cout << "adress 1 : " << bob.identify() << std::endl;
    std::cout << "adress 2 : " << bob.getBrain().identify() << std::endl;
    return (0);
}