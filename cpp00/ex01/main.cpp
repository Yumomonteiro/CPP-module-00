/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:18:21 by yude-oli          #+#    #+#             */
/*   Updated: 2024/11/29 18:22:59 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "Phonebook.hpp"


int main(int argc, char *argv[])
{
        std::string command;
        phonebook book;
        (void)argv;
        if(argc != 1)
        {
                std::cout << "wrong args execute ./phonebook " << std::endl;
                return 0;    
        }   
        while (!std::cin.eof())
        {
                std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
                std::cin >> command;
                if (command == "ADD")
                        book.add_contact();
                else if (command == "SEARCH")
                        book.search_contact();
                else if (command == "EXIT")
                        break;
                else
                        std::cout << "Invalid command." << std::endl;
        }
}
