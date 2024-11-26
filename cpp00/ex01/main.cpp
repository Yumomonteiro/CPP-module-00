/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:18:21 by yude-oli          #+#    #+#             */
/*   Updated: 2024/11/26 17:21:22 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"


int main(int argc, char *argv[])
{
        std::string command;
        phonebook book;
        (void)argc;
        (void)argv;
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
