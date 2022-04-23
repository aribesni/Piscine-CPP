/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:35:47 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/08 15:35:48 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"
# include <iostream>

class   Bureaucrat;

class   Form {

    public :

        Form(std::string name, int to_sign, int to_exec);
        ~Form(void);

        std::string     getName(void) const;
        int             getToSign(void) const;
        int             getToExec(void) const;
        bool            getSigned(void) const;
        void            beSigned(Bureaucrat *b);
        virtual void    execute(Bureaucrat const &executor) const;

        class   GradeTooHighException : public std::exception {

            public :
                virtual const char *what() const throw() { return ("Grade too high"); };
        };

        class   GradeTooLowException : public std::exception {

            public :
                virtual const char *what() const throw() { return ("Grade too low"); };
        };

        class   NotSignedException : public std::exception {

            public :
                virtual const char *what() const throw() { return ("Form not signed"); };
        };

    private :

        std::string const   _name;
        int                 _to_sign;
        int                 _to_exec;
        bool                _signed;

};

std::ostream    &operator<<(std::ostream &o, Form const &f);

#endif