/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriaco <yuriaco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:03:57 by yuriaco           #+#    #+#             */
/*   Updated: 2024/12/04 12:06:51 by yuriaco          ###   ########.fr       */
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
    void (Harl::*f)(void);

    if (level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR")
    {
        switch (level[0]) {
        case 'D':
            std::cout << "\n[DEBUG]" << std::endl;
            f = &Harl::debug;
            (this->*f)();
            // fall through
            
        case 'I':
            std::cout << "\n[INFO]" << std::endl;
            f = &Harl::info;
            (this->*f)();
            // fall through
            
        case 'W':
            std::cout << "\n[WARNING]" << std::endl;
            f = &Harl::warning;
            (this->*f)();
            // fall through
            
        case 'E':
            std::cout << "\n[ERROR]" << std::endl;
            f = &Harl::error;
            (this->*f)();
            // fall through
        }
    }
    else
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

}
