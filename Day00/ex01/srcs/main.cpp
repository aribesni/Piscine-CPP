/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:18:32 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/05 16:18:33 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	ft_atoi(const char *str)
{
	int		j;
	int		k;

	j = 1;
	k = 0;
	while (*str == ' ' || *str == '\t'
		|| *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			j = -j;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		k = k * 10 + (*str - 48);
		str++;
	}
	return (j * k);
}

static void ft_search_contact(Phonebook *add, std::string buf, int *count) {
    
    int i;

    i = 0;
    std::cout << std::endl << "\033[1m\033[32m" << "Search contact" << "\033[0m" << std::endl << std::endl;
    std::cout << "\033[1m\033[37m" << "|     index|first name| last name|     login|" << "\033[0m" << std::endl;
    while (i < *count)
    {
        add[i].search_contact(i + 1);
        i++;
    }
    std::cout << std::endl << "\033[1m\033[37m" << "Enter contact index : " << "\033[0m";
    std::getline(std::cin, buf);
    i = ft_atoi(buf.data());
    if (i > 0 && i <= *count)
        add[i - 1].display_contact();
    else
        std::cout << std::endl << "\033[1m\033[31m" << "Invalid input" << "\033[0m" << std::endl << std::endl;
    return ;
}

static void ft_add_contact(Phonebook *add, int *count) {

    if (*count >= 8)
        std::cout << "\033[1m\033[31m" << "Phonebook full" << "\033[0m" << std::endl;
    else
    {
        std::cout << std::endl << "\033[1m\033[33m" << "Add contact" << "\033[0m" << std::endl << std::endl;
        add[*count].add_contact();
    }
    *count += 1;
    return ;
}

static void ft_enter_command(void) {

    std::string buf;
    Phonebook   add[8];
    int         count;

    count = 0;
    std::getline(std::cin, buf);
    while (buf.compare("EXIT") != 0 && buf.compare("Exit") != 0 && buf.compare("exit") != 0)
    {
        if (buf.compare("ADD") == 0 || buf.compare("Add") == 0 || buf.compare("add") == 0)
            ft_add_contact(add, &count);    
        else if (buf.compare("SEARCH") == 0 || buf.compare("Search") == 0 || buf.compare("search") == 0)
            ft_search_contact(add, buf, &count);
        std::getline(std::cin, buf);
    }
    std::cout << std::endl << "\033[1m\033[34m" << "Exiting phonebook" << "\033[0m" << std::endl << std::endl;
    return ;
}

static void ft_launch_phonebook(void) {

    std::cout << std::endl << "\033[1m\033[37m" << "Enter a command : " << "\033[0m";
    std::cout << "\033[1m\033[33m" << "ADD " << "\033[0m" << "to add a contact" << " / ";
    std::cout << "\033[1m\033[32m" << "SEARCH " << "\033[0m" << "to search a contact" << " / ";
    std::cout << "\033[1m\033[34m" << "EXIT " << "\033[0m" << "to exit phonebook" << std::endl << std::endl;
    return ;
}

int main(void) {

    ft_launch_phonebook();
    ft_enter_command();
    return (0);
}