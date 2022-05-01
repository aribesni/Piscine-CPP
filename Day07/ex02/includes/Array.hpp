/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:10:59 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/30 11:11:00 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template <typename T>
class   Array {

    public :

        Array(void) {

            this->_str = new T[0];
            this->_size = 0;
            return ;
        }

        Array(unsigned int n) {

            this->_str = new T[n];
            this->_size = n;
            return ;
        }

        Array(Array const &src) {

            this->_str = src._str;
            this->_size = src._size;
            return ;
        }

        ~Array(void) {

            delete [] this->_str;
        }
        unsigned int    size(void) {

            return (this->_size);
        }

        Array&  operator=(Array const &rhs) {

            int i;

            i = 0;
            if (*this == rhs)
                return (*this);
            this->_str = new T[rhs.size()];
            this->_size = rhs.size();
            while (i < this->_size)
            {
                this->_str[i] = rhs._str[i];
                i++;
            }
            return (*this);
        }

        T&  operator[](const unsigned int i) {

            if (!this->_str || i >= this->_size)
                throw std::exception();
            return (this->_str[i]);
        }
    
    private :

        T               *_str;
        unsigned int    _size;

};

#endif