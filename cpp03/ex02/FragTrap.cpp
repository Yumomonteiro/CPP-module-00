/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:21:07 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/20 11:21:07 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
        std::cout << "FragTrap is born!" << std::endl;
        this->_name = "";
        this->_hitPoints = 100;
        this->_energyPoints = 100;
        this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) :ClapTrap(name) {
        this->_name = "";
        this->_hitPoints = 100;
        this->_energyPoints = 50;
        this->_attackDamage = 20;
        std::cout << "FragTrap " << _name << " is born!" << std::endl;
}

FragTrap::~FragTrap(void) {
        std::cout << "FragTrap Destructor is called " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
        *this = copy;
}

FragTrap &FragTrap::operator = (const FragTrap &copy) {
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
        return *this;
}

void FragTrap::highFivesGuys(void) {
        std::cout << "FragTrap " << _name << " says: High five guys!" << std::endl;
}