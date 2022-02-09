/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:04:32 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/05 16:04:34 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>

class Phonebook {

    public :

        Phonebook(void);
        ~Phonebook(void);
        void    add_contact(void);
        void    search_contact(int index);
        void    display_contact(void);


    private :

        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _login;
        std::string _postal_adress;
        std::string _email_adress;
        std::string _phone_number;
        std::string _birthday_date;
        std::string _favorite_meal;
        std::string _underwear_color;
        std::string _darkest_secret;

        void _ft_first_name(void);
        void _ft_last_name(void);
        void _ft_nickname(void);
        void _ft_login(void);
        void _ft_postal_adress(void);
        void _ft_email_adress(void);
        void _ft_phone_number(void);
        void _ft_birthday_date(void);
        void _ft_favorite_meal(void);
        void _ft_underwear_color(void);
        void _ft_darkest_secret(void);
};

#endif
