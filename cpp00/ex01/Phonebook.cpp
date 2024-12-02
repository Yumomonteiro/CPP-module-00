/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:49:12 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/02 10:52:42 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>


phonebook::phonebook()
{
        index = 0;
}
phonebook::~phonebook(){}

void phonebook::add_contact() {
    std::string first_name, last_name, nickname, phone_number, secret;

    std::cout << "Enter the first name: ";
    std::cin >> first_name;
    std::cout << "Enter the last name: ";
    std::cin >> last_name;
    std::cout << "Enter the nickname: ";
    std::cin >> nickname;

    bool valid_phone_number = false;
    while (!valid_phone_number) {
        std::cout << "Enter the phone number: ";
        std::cin >> phone_number;
        valid_phone_number = true;
        for (size_t i = 0; i < phone_number.length(); ++i) {
            if (!std::isdigit(phone_number[i])) {
                std::cout << "Invalid phone number. Please enter only numbers." << std::endl;
                valid_phone_number = false;
                break;
            }
        }
    }

    std::cout << "Enter the darkest secret: ";
    std::cin >> secret;

    int contact_index = index % 8;
    
    contacts[contact_index].set_first_name(first_name);
    contacts[contact_index].set_last_name(last_name);
    contacts[contact_index].set_nickname(nickname);
    contacts[contact_index].set_phone_number(phone_number);
    contacts[contact_index].set_secret(secret);

    std::cout << "Contact added successfully!" << std::endl;
    index++;
}


void phonebook::search_contact() {
    if (index == 0 && contacts[0].get_first_name().empty()) {
        std::cout << "No contacts available." << std::endl;
        return;
    }

    std::cout << std::setw(10) << std::right << "Index" 
              << "|"
              << std::setw(10) << std::right << "First Name" 
              << "|"
              << std::setw(10) << std::right << "Last Name" 
              << "|"
              << std::setw(10) << std::right << "Nickname" 
              << std::endl;

    for (int i = 0; i < std::min(index, 8); ++i) {
        std::cout << std::setw(10) << std::right << i 
                  << "|"
                  << std::setw(10) << std::right << contacts[i].get_first_name().substr(0, 10)
                  << "|"
                  << std::setw(10) << std::right << contacts[i].get_last_name().substr(0, 10)
                  << "|"
                  << std::setw(10) << std::right << contacts[i].get_nickname().substr(0, 10)
                  << std::endl;
    }

    int index_to_display;
    std::cout << "Enter the index of the contact to display: ";
    std::cin >> index_to_display;

    if (index_to_display < 0 || index_to_display >= 8 || std::cin.fail()) {
        std::cout << "Invalid index." << std::endl;
        if(std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Entrada inválida. Tente novamente." << std::endl;
        }
    } else {
        std::cout << "Contact Information:" << std::endl;
        std::cout << "First Name: " << contacts[index_to_display].get_first_name() << std::endl;
        std::cout << "Last Name: " << contacts[index_to_display].get_last_name() << std::endl;
        std::cout << "Nickname: " << contacts[index_to_display].get_nickname() << std::endl;
        std::cout << "Phone Number: " << contacts[index_to_display].get_phone_number() << std::endl;
        std::cout << "Darkest Secret: " << contacts[index_to_display].get_secret() << std::endl;
    }
}


