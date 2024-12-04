/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriaco <yuriaco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:03:57 by yuriaco           #+#    #+#             */
/*   Updated: 2024/12/03 11:27:56 by yuriaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug( void )
{
	std::cout << "DEBUG: I love extra bacon on my burger!" << std::endl;
}


void Harl::info( void )
{
	std::cout << "INFO: Adding bacon costs extra, just so you know." << std::endl;
}

void Harl::warning( void )
{
	std::cout << "WARNING: I think I deserve some free bacon!" << std::endl;
}

void Harl::error( void )
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager!" << std::endl;
}

void Harl::complain(std::string level) {
    std::string levels[] = {"debug", "info", "warning", "error"};
    void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            (this->*functions[i])();
            return;
        }
    }
    std::cout << "Invalid level." << std::endl;
}
