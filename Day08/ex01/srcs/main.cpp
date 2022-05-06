/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:16:58 by aribesni          #+#    #+#             */
/*   Updated: 2022/05/02 16:16:59 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void) {

    Span    sp = Span(5);

    try
    {
        sp.addNumber(5);
        std::cout << "5 added to the array" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "5 not added : array already full" << std::endl;
    }
    try
    {
        sp.addNumber(3);
        std::cout << "3 added to the array" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "3 not added : array already full" << std::endl;
    }
    try
    {
        sp.addNumber(17);
        std::cout << "17 added to the array" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "17 not added : array already full" << std::endl;
    }
    try
    {
        sp.addNumber(9);
        std::cout << "9 added to the array" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "9 not added : array already full" << std::endl;
    }
    try
    {
        sp.addNumber(11);
        std::cout << "11 added to the array" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "11 not added : array already full" << std::endl;
    }
    try
    {
        sp.addNumber(25);
        std::cout << "25 added to the array" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "25 not added : array already full" << std::endl;
    }

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    return (0);
}