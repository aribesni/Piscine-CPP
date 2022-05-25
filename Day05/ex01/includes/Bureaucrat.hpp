/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 11:14:52 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/08 11:14:54 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class   Bureaucrat {

    public :

        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &src);
        ~Bureaucrat(void);

        std::string getName(void) const;
        int         getGrade(void) const;

        void    gradeUp(void);
        void    gradeDown(void);
        void    signForm(bool b, std::string form_name);

        class GradeTooHighException : public std::exception {

            public :
                virtual const char *what() const throw() { return ("Grade too high"); };
        };

        class GradeTooLowException : public std::exception {

            public :
                virtual const char *what() const throw() { return ("Grade too low"); };
        };
        
        Bureaucrat  &operator=(Bureaucrat const &rhs);

    private :

        std::string _name;
        int         _grade;

};

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif