/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:12:06 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/14 17:12:07 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

void    ft_print_double(std::string str) {

    double  nb; 

    nb = stod(str);
    nb = static_cast<double>(nb);
    std::cout << nb;
    if (roundf(nb) == nb)
		std::cout << ".0";
    std::cout << std::endl;
}

void	ft_print_float(std::string str) {
	
    float   nb;

	nb = stof(str);
	nb = static_cast<float>(nb);
    std::cout << nb;
	if (roundf(nb) == nb)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}


void    ft_print_int(std::string str) {

    int nb;

    nb = stoi(str);
    std::cout << nb << std::endl;
}

void    ft_print_char(std::string str) {

    int nb;

    if (str.size() == 1 && (str[0] < 0 || str[0] > 9))
        std::cout << "'" << static_cast<char>(str[0]) << "'" << std::endl;
    else
    {
        nb = stoi(str);
        std::cout << "'" << static_cast<char>(nb) << "'" << std::endl;
    }
}

void    ft_print_data(std::string str) {

    std::cout << "char : ";
    try
    {
        ft_print_char(str);
    }
    catch (std::invalid_argument &e)
    {
        std::cout << "impossible" << std::endl;
    }
    catch (std::out_of_range &e)
	{
		std::cout << "Non displayable" << std::endl;
	}
    std::cout << "int : ";
    try
    {
        ft_print_int(str);
    }
    catch (std::invalid_argument &e)
    {
        std::cout << "impossible" << std::endl;
    }
    catch (std::out_of_range &e)
	{
		std::cout << "Non displayable" << std::endl;
	}
    std::cout << "float : ";
    try
    {
        ft_print_float(str);
    }
    catch (std::invalid_argument &e)
    {
        std::cout << "impossible" << std::endl;
    }
    catch (std::out_of_range &e)
	{
		std::cout << "Non displayable" << std::endl;
	}
    std::cout << "double : ";
    try
    {
        ft_print_double(str);
    }
    catch (std::invalid_argument &e)
    {
        std::cout << "impossible" << std::endl;
    }
    catch (std::out_of_range &e)
	{
		std::cout << "Non displayable" << std::endl;
	}
}

int main(int argc, char **argv) {

    std::string str;

    if (argc == 2)
    {
        str = static_cast<std::string>(argv[1]);
        ft_print_data(str);
    }
    return (0);
}