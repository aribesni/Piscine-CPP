/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:11:21 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/30 11:11:22 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) {

    Array<unsigned int> A;
	Array<unsigned int> B(4);
	Array<std::string>  C(4);

	for (unsigned int i = 0; i < B.size(); i++)
		B[i] = i;
	for (unsigned int i = 0; i < B.size(); i++)
		std::cout << B[i] << " ";
	std::cout << std::endl;
	B[1] = 8;
	for (unsigned int i = 0; i < B.size(); i++)
		std::cout << B[i] << " ";
	std::cout << std::endl;
	C[0] = "Hello";
	C[1] = "this";
	C[2] = "is";
	C[3] = "me";
	for (unsigned int i = 0; i < C.size(); i++)
		std::cout << C[i] << " ";
	std::cout << std::endl;
	return (0);
}