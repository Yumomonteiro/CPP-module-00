/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:18:21 by yude-oli          #+#    #+#             */
/*   Updated: 2024/11/25 15:20:32 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
        if (argc == 1) 
        {
                std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE *";
        }
        else
        {
                for (int i = 1; i < argc ; i++)
                {
                        for(int j = 0; argv[i][j]; j++)
                        {
                                std::cout << (char)toupper(argv[i][j]);
                        }
                }
        }
        std::cout << std::endl;
}
