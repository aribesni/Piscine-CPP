/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:57:51 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/10 11:57:53 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <iostream>

class   Form;

typedef struct  s_search_form {

    std::string name;
    Form        *new_form;
}               t_search_form;

class   Intern {

    public :

        Intern(void);
        ~Intern(void);

        Form    *makeForm(std::string form, std::string target);

};

#endif