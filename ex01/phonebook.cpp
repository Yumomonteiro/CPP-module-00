/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:49:12 by yude-oli          #+#    #+#             */
/*   Updated: 2024/11/26 16:50:38 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

void phonebook::add_contact() {

        if (index >= 8) {
                std::cout << "The phonebook is full." << std::endl;
                return;
        }

        std::string first_name, last_name, nickname, phone_number, secret;

        std::cout << "Enter the first name: ";
        std::cin >> first_name;
        std::cout << "Enter the last name: ";
        std::cin >> last_name;
        std::cout << "Enter the nickname: ";
        std::cin >> nickname;
        std::cout << "Enter the phone number: ";
        std::cin >> phone_number;
        std::cout << "Enter the darkest secret: ";
        std::cin >> secret;

        contacts[index] = contact(first_name, last_name, nickname, phone_number, secret);
        index++;
        std::cout << "Contact added successfully!" << std::endl;
}

void phonebook::search_contact(){
    if (index == 0) {
        std::cout << "No contacts available." << std::endl;
        return;
    }

    // Exibe os cabeçalhos das colunas
    std::cout << std::setw(10) << std::right << "Index" 
              << "|"
              << std::setw(10) << std::right << "First Name" 
              << "|"
              << std::setw(10) << std::right << "Last Name" 
              << "|"
              << std::setw(10) << std::right << "Nickname" 
              << std::endl;
    
    // Exibe os contatos
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

    // Solicita o índice do contato
    int index_to_display;
    std::cout << "Enter the index of the contact to display: ";
    std::cin >> index_to_display;

    if (index_to_display < 0 || index_to_display >= index) {
        std::cout << "Invalid index." << std::endl;
    } else {
        // Exibe o contato completo
        std::cout << "Contact Information:" << std::endl;
        std::cout << "First Name: " << contacts[index_to_display].get_first_name() << std::endl;
        std::cout << "Last Name: " << contacts[index_to_display].get_last_name() << std::endl;
        std::cout << "Nickname: " << contacts[index_to_display].get_nickname() << std::endl;
        std::cout << "Phone Number: " << contacts[index_to_display].get_phone_number() << std::endl;
        std::cout << "Darkest Secret: " << contacts[index_to_display].get_secret() << std::endl;
    }
}

