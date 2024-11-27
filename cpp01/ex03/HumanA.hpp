/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:06:10 by yude-oli          #+#    #+#             */
/*   Updated: 2024/11/27 13:44:18 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class   HumanA{
        
        private:
                std::string _weapon;
                std::string _name;

        public:
                HumanA(std::string name, Weapon &weapon);
                ~HumanA(void);
                
                std::string getName() const { return _name; }
                std::string getWeapon() const { return _weapon; }
                
                void    attack(void);
                

};

#endif