/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:02:02 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/14 16:42:20 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
        ClapTrap david("David");
        ClapTrap jack("Jack");
        david.attack("Jack");
        jack.takeDamage(5);
        jack.beRepaired(5);
        david.attack("Jack");
        jack.takeDamage(1);
        jack.takeDamage(1);
        jack.takeDamage(8);
        return 0;
}