/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:06:39 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/02 14:36:33 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA(void) {}

std::string HumanA::getName() const {
    return this->_name;
}



void HumanA::attack(void) {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}








