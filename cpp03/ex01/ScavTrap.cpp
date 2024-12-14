/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 16:49:06 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/14 16:49:06 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
        std::cout << "ScavTrap is born!" << std::endl;
        this->_name = "";
        this->_hitPoints = 100;
        this->_energyPoints = 50;
        this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) :ClapTrap(name) {
        this->_name = "";
        this->_hitPoints = 100;
        this->_energyPoints = 50;
        this->_attackDamage = 20;
        std::cout << "ScavTrap " << _name << " is born!" << std::endl;
}

ScavTrap::~ScavTrap(void){
        std::cout << "ScavTrap Destructor is called " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
        *this = copy;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &copy) {
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
        return *this;
}

void ScavTrap::attack(std::string const & target) {
        if(this->_energyPoints < 1) {
                std::cout << "ScavTrap " << _name << " has no energy points!" << std::endl;
                return;
        }
        if(this->_hitPoints < 1) {
                std::cout << "ScavTrap " << _name << " is already dead!" << std::endl;
                return;
        }
        std::cout << "ScavTrap " <<this-> _name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
}

void ScavTrap::guardGate(void) {
        std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode!" << std::endl;
}