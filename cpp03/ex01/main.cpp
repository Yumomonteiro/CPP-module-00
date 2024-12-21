/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:02:02 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/20 11:15:59 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
        {
                ScavTrap david("David");
                ScavTrap jack("Jack");
                david.attack("Jack");
                jack.takeDamage(5);
                jack.beRepaired(5);
                david.attack("Jack");
                jack.takeDamage(1);
                jack.takeDamage(1);
                jack.takeDamage(8);
                jack.guardGate();
        }
}