/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:02:02 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/14 17:41:41 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
        {
                // ClapTrap david("David");
                // ClapTrap jack("Jack");
                // david.attack("Jack");
                // jack.takeDamage(5);
                // jack.beRepaired(5);
                // david.attack("Jack");
                // jack.takeDamage(1);
                // jack.takeDamage(1);
                // jack.takeDamage(8);
        }
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