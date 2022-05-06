/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:57:11 by aribesni          #+#    #+#             */
/*   Updated: 2022/05/04 16:57:12 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <stack>

template <typename T>
class   MutantStack : public std::stack<T> {

    public :

        MutantStack(void) : std::stack<T>() {};
        MutantStack(MutantStack<T> const &obj) : std::stack<T>(obj) {};
        ~MutantStack(void) {};
        
        MutantStack<T>  &operator=(MutantStack const &rhs) {
            
            if (*this != rhs)
                *this = new std::stack<T>(rhs);
            return (*this);
        };

        typedef typename std::stack<T>::container_type::iterator    iterator;
        
        iterator    begin(void) { return (std::stack<T>::c.begin());};
        iterator    end(void) { return (std::stack<T>::c.end());};


};

#endif