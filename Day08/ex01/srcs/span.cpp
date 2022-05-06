/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:17:26 by aribesni          #+#    #+#             */
/*   Updated: 2022/05/02 16:17:27 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(const unsigned int N) {

    this->_size = N;
    this->_array.reserve(N);
    return ;
}

Span::Span(Span const &span) {

    *this = span;
}

void    Span::addNumber(const int n) {

    if (this->_array.size() < this->_size)
        this->_array.push_back(n);
    else
        throw std::exception();
}

int Span::shortestSpan(void) {

    int			                min;
    int			                tmp;
	std::vector<int>::iterator	itr1;
	std::vector<int>::iterator	itr2;

	itr1 = this->_array.begin();
	min = *itr1;
	while (itr1 != this->_array.end())
	{
        itr2 = this->_array.begin();
        while (itr2 != this->_array.end())
        {
            if (*itr1 != *itr2)
            {
                tmp = abs(*itr1 - *itr2);
                if (min > tmp)
                    min = tmp;
            }
            itr2++;
        }
        itr1++;
	}
	return (min);
}

int Span::longestSpan(void) {

    int			                max;
    int			                tmp;
	std::vector<int>::iterator	itr1;
	std::vector<int>::iterator	itr2;

	itr1 = this->_array.begin();
	max = *itr1;
	while (itr1 != this->_array.end())
	{
        itr2 = this->_array.begin();
        while (itr2 != this->_array.end())
        {
            if (*itr1 != *itr2)
            {
                tmp = abs(*itr1 - *itr2);
                if (max < tmp)
                    max = tmp;
            }
            itr2++;
        }
        itr1++;
	}
	return (max);
}