/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:05:18 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/02 15:01:16 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() {
    {
        Weapon club = Weapon("Faca");
        HumanA bob("Bob", club);
        bob.attack(); 
        club.setType("Espada");
        bob.attack();
    }
    
    {
        Weapon club = Weapon("Pistola");
        HumanB jim("Jim");
        jim.attack();
        jim.setWeapon(club);
        jim.attack();
        club.setType("AK-47");
        jim.attack();
    }
    return 0;
}