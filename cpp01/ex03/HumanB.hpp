/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:06:24 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/02 14:36:18 by yude-oli         ###   ########.fr       */
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
                std::string getName() const;
                void    attack(void);
                void    setWeapon(Weapon &weapon);

};

#endif