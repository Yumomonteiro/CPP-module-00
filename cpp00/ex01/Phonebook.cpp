/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:49:12 by yude-oli          #+#    #+#             */
/*   Updated: 2024/11/28 15:55:02 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>

void phonebook::add_contact() {
        
        if (index >= 8)
                index = 7;
        
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

        contacts[index].set_first_name(first_name);
        contacts[index].set_last_name(last_name);
        contacts[index].set_nickname(nickname);
        contacts[index].set_phone_number(phone_number);
        contacts[index].set_secret(secret);
        
        index++;
        std::cout << "Contact added successfully!" << std::endl;
}

void phonebook::search_contact(){

        if (index == 0) {
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

        for (int i = 0; i < index; ++i) {
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
        if (index_to_display < 0 || index_to_display >= index || std::cin.fail()) {
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

