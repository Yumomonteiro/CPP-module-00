/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:53:42 by yude-oli          #+#    #+#             */
/*   Updated: 2024/11/28 15:38:31 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


std::string contact::get_first_name() const {
        return _first_name;
}

std::string contact::get_last_name() const {
        return _last_name;
}

std::string contact::get_nickname() const {
        return _nickname;
}

std::string contact::get_phone_number() const {
        return _phone_number;
}

std::string contact::get_secret() const {
        return _secret;
}
// seters

void contact::set_first_name(const std::string& first_name) {
        this->_first_name = first_name;
}

void contact::set_last_name(const std::string& last_name) {
        this->_last_name = last_name;
}

void contact::set_nickname(const std::string& nickname) {
        this->_nickname = nickname;
}

void contact::set_phone_number(const std::string& phone_number) {
        this->_phone_number = phone_number;
}

void contact::set_secret(const std::string& secret) {
        this->_secret = secret;
}
