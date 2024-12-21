/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 16:08:34 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/14 16:08:34 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
        std::cout << "ClapTrap is born!" << std::endl;
        this->_name = "";
        this->_hitPoints = 10;
        this->_energyPoints = 10;
        this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap Destructor is called " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	*this = copy;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &copy) {
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return *this;
}

void ClapTrap::attack(std::string const & target) {
	if(this->_energyPoints < 1) {
		std::cout << "ClapTrap " << _name << " has no energy points!" << std::endl;
		return;
	}
        if(this->_hitPoints < 1) {
                std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
                return;
        }
	std::cout << "ClapTrap " <<this-> _name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if(this->_hitPoints < 1 || this->_hitPoints - amount < 1) {
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return;
	}
	if(_energyPoints < 1) {
		std::cout << "ClapTrap " << this->_name << " has no energy points!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
	this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if(this->_hitPoints < 1) {
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return;
	}
	if(_energyPoints < 1) {
		std::cout << "ClapTrap " << this->_name << " has no energy points!" << std::endl;
		return;
	}
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " is repaired " << amount << " points!" << std::endl;
}
