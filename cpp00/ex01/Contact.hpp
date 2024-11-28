/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:33:51 by yude-oli          #+#    #+#             */
/*   Updated: 2024/11/28 15:35:37 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
# include <iostream>

class   contact{
        private:
                std::string _first_name;
                std::string _last_name;
                std::string _nickname;
                std::string _phone_number;
                std::string _secret;
        public:
                //getters
                std::string get_first_name() const;
                std::string get_last_name() const;
                std::string get_nickname() const;
                std::string get_phone_number() const;
                std::string get_secret() const; 

                //setters
                void set_first_name(const std::string &first_name);
                void set_last_name(const std::string &last_name);
                void set_nickname(const std::string &nickname);
                void set_phone_number(const std::string &phone_number);
                void set_secret(const std::string &secret);
        };


#endif