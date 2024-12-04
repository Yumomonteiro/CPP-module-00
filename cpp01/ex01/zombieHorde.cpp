/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriaco <yuriaco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:49:46 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/04 12:13:38 by yuriaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
        if(N <= 0){
                std::cout << "Numbers ( >= 0 )";
                return (NULL);
        }
        if(N > 2147483647){
                std::cout << "Numbers ( < 2147483647 )";
                return (NULL);
        }
        Zombie *zombies = new Zombie[N];
        for(int i = 0 ; i < N ; i++)
        {
                zombies[i].setName(name);
                zombies[i].announce(); 
        }
        return (zombies);
}