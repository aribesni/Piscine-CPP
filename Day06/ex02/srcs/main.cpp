/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:29:36 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/24 10:29:37 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

void    identify_from_reference(Base &base) {
    
    if (dynamic_cast<A*>(&base))
        std::cout << "Base identified : A" << std::endl; 
    else if (dynamic_cast<B*>(&base))
        std::cout << "Base identified : B" << std::endl;
    else if (dynamic_cast<C*>(&base))
        std::cout << "Base identified : C" << std::endl;
    else
        std::cout << "Error" << std::endl;
}

void    identify_from_pointer(Base *base) {

    if (dynamic_cast<A*>(base))
        std::cout << "Base identified : A" << std::endl; 
    else if (dynamic_cast<B*>(base))
        std::cout << "Base identified : B" << std::endl; 
    else if (dynamic_cast<C*>(base))
        std::cout << "Base identified : C" << std::endl; 
    else
        std::cout << "Error" << std::endl;
}

Base    *ft_new_base(void) {

    int i;

    srand(time(0));
    i = rand() % 3;
    if (i == 0)
    {
        std::cout << std::endl << "Base generated : A" << std::endl << std::endl;
        return (new A[1]);
    }
    else if (i == 1)
    {
        std::cout << std::endl << "Base generated : B" << std::endl << std::endl;
        return (new B[1]);
    }
    else if (i == 2)
    {
        std::cout << std::endl << "Base generated : C" << std::endl << std::endl;
        return (new C[1]);
    }
    return (NULL);
}

int main(void) {

    Base    *base;
    A       a[1];
    B       b[1];
    C       c[1];

    std::cout << std::endl << "          ------     RANDOMLY GENERATING BASE     -----" << std::endl;
    base = ft_new_base();
    std::cout << "          ------     IDENTIFY FROM POINTER     ------" << std::endl << std::endl;
    identify_from_pointer(base);
    std::cout << std::endl << "          ------     IDENTIFY FROM REFERENCE     ------" << std::endl << std::endl;
    identify_from_reference(*base);
    
    std::cout << std::endl << "          ------     MANUALLY GENERATING BASE     -----" << std::endl << std::endl;
    std::cout << "Base generated : A" << std::endl;
    std::cout << "Base generated : B" << std::endl;
    std::cout << "Base generated : C" << std::endl;
    std::cout << std::endl << "          ------     IDENTIFY FROM POINTER     ------" << std::endl << std::endl;
    identify_from_pointer(a);
    identify_from_pointer(b);
    identify_from_pointer(c);

    std::cout << std::endl << "          ------     IDENTIFY FROM REFERENCE     ------" << std::endl << std::endl;
    identify_from_reference(*a);
    identify_from_reference(*b);
    identify_from_reference(*c);
    std::cout << std::endl;

    return (0);
}