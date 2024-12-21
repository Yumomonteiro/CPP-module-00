/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriaco <yuriaco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:02:02 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/20 11:56:41 by yuriaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
        std::cout << "<----CONSTRUCTORS---->" << std::endl;

        ClapTrap david("ClapTrap");
        ScavTrap jack("ScavTrap");
        FragTrap james("FragTrap");


        std::cout << "<----TESTS CLAPTRAP AND SCAVTRAP---->" << std::endl;

        david.attack("Jack");
        jack.takeDamage(5);
        jack.beRepaired(5);
        david.attack("Jack");
        jack.takeDamage(1);
        jack.takeDamage(1);
        jack.takeDamage(8);
        jack.guardGate();

        std::cout << "<----TESTS CLAPTRAP AND SCAVTRAP AND FLAGTRAP---->" << std::endl;

        david.attack("Jack");
        james.attack("david");
        
        jack.takeDamage(5);
        david.takeDamage(5);
        jack.beRepaired(5);
        david.beRepaired(5);
        david.attack("Jack");
        jack.takeDamage(1);
        jack.takeDamage(1);
        jack.takeDamage(8);
        jack.guardGate();
        james.highFivesGuys();
        
        return (0);
}