/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:32:13 by yude-oli          #+#    #+#             */
/*   Updated: 2024/11/27 12:50:38 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <iostream>

int     main(void)
{
        std::string str ;
        str = "HI THIS IS BRAIN";

        std::string *stringPTR = &str;
        std::string &stringREF = str;

        std::cout << "Value of string : " << str << std::endl;
        std::cout << "memory address &STR: " << &str << std::endl;
        std::cout << "memory address &PTR : " << &stringPTR << std::endl;
        std::cout << "memory address &REF : " << &stringREF << std::endl;

        std::cout << "value PTR: " << stringPTR << std::endl;
        std::cout << "value  REF: " << &stringREF << std::endl;

}