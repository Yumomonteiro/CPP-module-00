/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:06:24 by yude-oli          #+#    #+#             */
/*   Updated: 2024/11/27 13:43:22 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class   HumanB{
        
        private:
                std::string _name;
                Weapon  *_weapon;
                
        public:
                HumanB(std::string name);
                ~HumanB(void);
                std::string getName() const { return _name; }
                std::string getWeapon() const { return _weapon; }
                void    attack(void);
                void    setWeapon(Weapon &weapon);

};

#endif