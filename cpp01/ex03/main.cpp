/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yuriaco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:05:18 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/04 12:27:13 by yuriaco          ###   ########.fr       */
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