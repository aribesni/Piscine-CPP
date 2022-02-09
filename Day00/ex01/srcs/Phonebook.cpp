/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:04:25 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/05 16:04:27 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void) {

    // std::cout << "Class created" << std::endl;
    return ;
}

Phonebook::~Phonebook(void) {

    // std::cout << "Class destroyed" << std::endl;
    return ;
}

void    Phonebook::add_contact(void) {

    this->_ft_first_name();
    this->_ft_last_name();
    this->_ft_nickname();
    this->_ft_login();
    this->_ft_postal_adress();
    this->_ft_email_adress();
    this->_ft_phone_number();
    this->_ft_birthday_date();
    this->_ft_favorite_meal();
    this->_ft_underwear_color();
    this->_ft_darkest_secret();
    return ;
}

void    Phonebook::search_contact(int index) {
    
    std::string blank = "          ";

    std::cout << "|         " << index << "\033[1m\033[37m" << "|" << "\033[0m";
    if (std::strlen(this->_first_name.data()) <= 10)
        std::cout << blank.substr(0, 10 - std::strlen(this->_first_name.data())) << this->_first_name << "\033[1m\033[37m" << "|" << "\033[0m";
    else
        std::cout << this->_first_name.substr(0, 9) << "." << "\033[1m\033[37m" << "|" << "\033[0m";
    if (std::strlen(this->_last_name.data()) <= 10)
        std::cout << blank.substr(0, 10 - std::strlen(this->_last_name.data())) << this->_last_name << "\033[1m\033[37m" << "|" << "\033[0m";
    else
        std::cout << this->_last_name.substr(0, 9) << "." << "\033[1m\033[37m" << "|" << "\033[0m";
    if (std::strlen(this->_login.data()) <= 10)
        std::cout << blank.substr(0, 10 - std::strlen(this->_login.data())) << this->_login << "\033[1m\033[37m" << "|" << "\033[0m" << std::endl;
    else
        std::cout << this->_login.substr(0, 9) << "." << "\033[1m\033[37m" << "|" << "\033[0m" << std::endl;
    return ;
}

void    Phonebook::display_contact(void) {

    std::cout << std::endl << "\033[1m\033[37m" << "first name : " << "\033[0m" << this->_first_name << std::endl;
    std::cout << "\033[1m\033[37m" << "last name : " << "\033[0m" << this->_last_name << std::endl;
    std::cout << "\033[1m\033[37m" << "nickname : " << "\033[0m" << this->_nickname << std::endl;
    std::cout << "\033[1m\033[37m" << "login : " << "\033[0m" << this->_login << std::endl;
    std::cout << "\033[1m\033[37m" << "postal adress : " << "\033[0m" << this->_postal_adress << std::endl;
    std::cout << "\033[1m\033[37m" << "email adress : " << "\033[0m" << this->_email_adress << std::endl;
    std::cout << "\033[1m\033[37m" << "phone number : " << "\033[0m" << this->_phone_number << std::endl;
    std::cout << "\033[1m\033[37m" << "birthday date : " << "\033[0m" << this->_birthday_date << std::endl;
    std::cout << "\033[1m\033[37m" << "favorite meal : " << "\033[0m" << this->_favorite_meal << std::endl;
    std::cout << "\033[1m\033[37m" << "underwear color : " << "\033[0m" << this->_underwear_color << std::endl;
    std::cout << "\033[1m\033[37m" << "darkest secret : " << "\033[0m" << this->_darkest_secret << std::endl << std::endl;
    return ;
}

void    Phonebook::_ft_first_name(void) {

    std::cout << "\033[1m\033[37m" << "first name : " << "\033[0m";
    std::getline(std::cin, this->_first_name);
    return ;
}

void    Phonebook::_ft_last_name(void) {

    std::cout << "\033[1m\033[37m" << "last name : " << "\033[0m";
    std::getline(std::cin, this->_last_name);
    return ;
}

void    Phonebook::_ft_nickname(void) {

    std::cout << "\033[1m\033[37m" << "nickname : " << "\033[0m";
    std::getline(std::cin, this->_nickname);
    return ;
}

void    Phonebook::_ft_login(void) {

    std::cout << "\033[1m\033[37m" << "login : " << "\033[0m";
    std::getline(std::cin, this->_login);
    return ;
}

void    Phonebook::_ft_postal_adress(void) {

    std::cout << "\033[1m\033[37m" << "postal adress : " << "\033[0m";
    std::getline(std::cin, this->_postal_adress);
    return ;
}

void    Phonebook::_ft_email_adress(void) {

    std::cout << "\033[1m\033[37m" << "email adress : " << "\033[0m";
    std::getline(std::cin, this->_email_adress);
    return ;
}

void    Phonebook::_ft_phone_number(void) {

    std::cout << "\033[1m\033[37m" << "phone number : " << "\033[0m";
    std::getline(std::cin, this->_phone_number);
    return ;
}

void    Phonebook::_ft_birthday_date(void) {

    std::cout << "\033[1m\033[37m" << "birthday date : " << "\033[0m";
    std::getline(std::cin, this->_birthday_date);
    return ;
}

void    Phonebook::_ft_favorite_meal(void) {

    std::cout << "\033[1m\033[37m" << "favorite meal : " << "\033[0m";
    std::getline(std::cin, this->_favorite_meal);
    return ;
}

void    Phonebook::_ft_underwear_color(void) {

    std::cout << "\033[1m\033[37m" << "underwear color : " << "\033[0m";
    std::getline(std::cin, this->_underwear_color);
    return ;
}

void    Phonebook::_ft_darkest_secret(void) {

    std::cout << "\033[1m\033[37m" << "darket secret : " << "\033[0m";
    std::getline(std::cin, this->_darkest_secret);
    std::cout << std::endl;
    return ;
}