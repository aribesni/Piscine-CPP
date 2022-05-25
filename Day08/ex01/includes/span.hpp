/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:17:35 by aribesni          #+#    #+#             */
/*   Updated: 2022/05/02 16:17:36 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <vector>
# include <cmath>

class   Span {

    public :

        Span(const unsigned int N);
        Span(Span const &span);
        ~Span(void) {};

        void addNumber(const int n);
        int shortestSpan(void);
        int longestSpan(void);

        Span    &operator=(Span const &rhs);

    private :

        unsigned int        _size;
        std::vector<int>    _array;

};

#endif