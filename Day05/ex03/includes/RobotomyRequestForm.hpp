/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:54:22 by aribesni          #+#    #+#             */
/*   Updated: 2022/04/09 13:54:23 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_H
# define ROBOTMYREQUESTFORM_H

# include "Form.hpp"
# include <iostream>

class   RobotomyRequestForm : public Form {

    public :

        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &src);
        ~RobotomyRequestForm(void);
        
        virtual void    execute(Bureaucrat const &executor) const;

        RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

    private :

        std::string _target;

};

#endif
