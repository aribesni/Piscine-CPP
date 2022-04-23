/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:54:54 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/09 13:54:55 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "Form.hpp"
# include <iostream>

class   PresidentialPardonForm : public Form {

    public :

        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm(void);

        virtual void    execute(Bureaucrat const &executor) const;
    
    private :

        std::string _target;
};

#endif
