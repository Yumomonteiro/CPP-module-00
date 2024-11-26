/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:33:51 by yude-oli          #+#    #+#             */
/*   Updated: 2024/11/26 16:50:46 by yude-oli         ###   ########.fr       */
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
                contact(){}
                contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string secret) : _first_name(first_name), _last_name(last_name), _nickname(nickname), _phone_number(phone_number), _secret(secret) {}
                std::string get_first_name() const { return _first_name; }
                std::string get_last_name() const { return _last_name; }
                std::string get_nickname() const { return _nickname; }
                std::string get_phone_number() const { return _phone_number; }
                std::string get_secret() const { return _secret; }       
};


#endif