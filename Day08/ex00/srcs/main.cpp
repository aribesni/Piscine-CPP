/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 22:42:49 by aribesni          #+#    #+#             */
/*   Updated: 2022/05/01 22:42:50 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main(void)
{
    int i;
	std::vector<int> list;

    i = 0;
	while (i < 20)
	{
        list.push_back(i * 2);
        i++;
    }
    try
	{
		std::cout << easyfind(list, 4) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Cannot find 4" << std::endl;
	}
	try
	{
		std::cout << easyfind(list, 11) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Cannot find 11" << std::endl;
	}
	try
	{
		std::cout << easyfind(list, 38) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Cannot find 38" << std::endl;
	}
}