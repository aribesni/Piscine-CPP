/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:31:29 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/09 10:31:30 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static void ponyOnTheHeap(void) {

    std::cout << std::endl << "\033[35m" << "          ----------          Pony on the heap created          ----------          " << "\033[0m" << std::endl << std::endl;
    std::cout << "\033[33m" << "                                         |" << "\033[0m" << std::endl;
    std::cout << "\033[35m" << "                                        <" << "\033[0m" << "\033[33m" << "^" << "\033[0m" << "\033[35m" << "\\____" << "\033[0m" << std::endl;
    std::cout << "\033[35m" << "                                         \\____|" << "\033[0m" << "\033[37m" << "\\" << "\033[0m" << std::endl;
    std::cout << "\033[35m" << "                                         /|  /|" << "\033[0m" << std::endl << std::endl;
    return ;
}

static void ponyOnTheStack(void) {

    std::cout << std::endl << "\033[36m" << "          ----------          Pony on the stack created          ----------          " << "\033[0m" << std::endl << std::endl;
    std::cout << "\033[33m" << "                                         |" << "\033[0m" << std::endl;
    std::cout << "\033[36m" << "                                        <" << "\033[0m" << "\033[33m" << "^" << "\033[0m" << "\033[36m" << "\\____" << "\033[0m" << std::endl;
    std::cout << "\033[36m" << "                                         \\____|" << "\033[0m" << "\033[37m" << "\\" << "\033[0m" << std::endl;
    std::cout << "\033[36m" << "                                         /|  /|" << "\033[0m" << std::endl << std::endl;
    return ;
}

int main(void) {

    Pony    pony_stack;
    Pony    *pony_heap = new Pony;

    pony_stack.initPony();
    ponyOnTheStack();
    pony_heap->initPony();
    ponyOnTheHeap();
    delete pony_heap;
    return (0);
}