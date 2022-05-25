/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:53:46 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/09 13:53:48 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "Form.hpp"
# include <iostream>
# include <fstream>

class   ShrubberyCreationForm : public Form {

    public :

        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &src);
        ~ShrubberyCreationForm(void);
        
        virtual void    execute(Bureaucrat const &executor) const;
    
        ShrubberyCreationForm   &operator=(ShrubberyCreationForm const &rhs);
    
    private :

        std::string _target;

};

#endif