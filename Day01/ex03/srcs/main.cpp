/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:45:24 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/11 14:45:25 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void) {

    int n;

    std::cout << std::endl << "\033[1m\033[34m" << "Enter number of zombies : " << "\033[0m";
    std::cin >> n;
    ZombieHorde Zombie1(n);

    std::cout << "\033[1m\033[31m" << "Destroying random zombie ..." << "\033[0m" << std::endl << std::endl;

    return (0);
}