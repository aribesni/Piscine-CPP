/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:37:04 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/25 13:37:05 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {

    std::cout << "Gaaah. Break everything !" << std::endl;
    return ;
}

SuperMutant::~SuperMutant(void) {

    std::cout << "Aaargh..." << std::endl;
    return ;
}