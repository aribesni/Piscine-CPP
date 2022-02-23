/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:45:24 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/23 15:11:10 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

static void randomChump(void) {

    int i;

    srand(time(0));
    i = (rand() % 12);
    std::string name[13] = {"Lebron", "Kobe", "Michael", "Larry", "Wilt", "Earvin",
        "Allen", "Giannis", "Dikembe", "Karim", "Hakeem", "Kawhi", "Kyrie"};
    ZombieEvent Random("Random");
    std::cout << std::endl << "\033[1m\033[35m" << "Generating random zombie ..." << "\033[0m" << std::endl << std::endl;
    Random.newZombie(name[i]);
    std::cout << std::endl;
    return ;
}

int main(void) {

    Zombie		*new_zombie;
    std::string	name;
    std::string	type;

    std::cout << std::endl << "\033[1m\033[34m" << "Enter zombie type : " << "\033[0m";
    std::getline(std::cin, type);
    ZombieEvent Zombie1(type);

    std::cout << std::endl << "\033[1m\033[34m" << "Enter zombie name : " << "\033[0m";
    std::getline(std::cin, name);
    std::cout << std::endl;
    std::cout << std::endl << "\033[1m\033[35m" << "Generating your zombie ..." << "\033[0m" << std::endl << std::endl;
    new_zombie = Zombie1.newZombie(name);
    std::cout << std::endl;

    std::cout << "\033[1m\033[31m" << "Destroying your zombie ..." << "\033[0m" << std::endl << std::endl;
    delete new_zombie;

    randomChump();
    std::cout << "\033[1m\033[31m" << "Destroying random zombie ..." << "\033[0m" << std::endl << std::endl;

    return (0);
}
