/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:55:23 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/24 11:55:24 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {

    std::cout << "Class Human created" << std::endl;
    return ;
}

Human::~Human(void) {

    std::cout << "Class Human destroyed" << std::endl;
    return ;
}

std::string Human::identify(void) {

    return (this->MyBrain.identify());
}

const Brain    Human::getBrain(void) {

    return (this->MyBrain);
}