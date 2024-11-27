/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:05:45 by yude-oli          #+#    #+#             */
/*   Updated: 2024/11/27 13:18:46 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <string.h>
# include <iostream>

class   Weapon{
        
        private:
                std::string type;
                


        public:
                Weapon(std::string);
                ~Weapon(void);
                std::string getType() const { return type; }
                void setType( std::string new_type);
  
};

#endif