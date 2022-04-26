/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:18:24 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/23 13:18:25 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>
#include <sstream>

struct  Data {std::string s1; int n; std::string s2;};

Data    *deserialize(void *raw) {
    
    Data    *data = new Data;
    char    *str;

    str = static_cast<char *>(raw);
    data->s1 = std::string(str, 8);
    std::cout << "s1 : " << data->s1 << std::endl;
    data->n = *reinterpret_cast<int *>(str + 8);
    std::cout << "n : " << data->n << std::endl;
    data->s2 = std::string(str + 8 + sizeof(int), 8);
    std::cout << "s2 : " << data->s2 << std::endl;
    return (data);
}

void    *serialize(void) {

    int                 i;
    int                 n;
    char                store[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char                *str = new char[16 + sizeof(int)];
    std::stringstream   stream;
    std::string         display;

    srand(time(0));
    n = 0;
    while (n < 8)
    {
        i = rand() % 62;
        str[n] = store[i];
        stream << str[n];
        n++;
    }
    std::cout << "s1 : " << str << std::endl;
    i = rand();
    stream << i;
    *reinterpret_cast<int *>(str + 8) = i;
    std::cout << "n : " << *reinterpret_cast<int *>(str + 8) << std::endl;
    n = 0;
    while (n < 8)
    {
        i = rand() % 62;
        str[n + 8 + sizeof(int)] = store[i];
        n++;
    }
    stream << str + 8 + sizeof(int);
    std::cout << "s2 : " << str + 8 + sizeof(int) << std::endl;
    display += stream.str();
    std::cout << "serialized data : " << display.c_str() << std::endl;
    std::cout << "adress : " << static_cast<void *>(str) << std::endl;
    return (str);
}

int main (void) {

    void    *tmp;
    std::cout << std::endl << "                --------------     SERIALIZE     --------------" << std::endl << std::endl;
    tmp = serialize();
    std::cout << std::endl << "                --------------     DESERIALIZE     --------------" << std::endl << std::endl;
    deserialize(tmp);
    std::cout << std::endl;
    return (0);
}