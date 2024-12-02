/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:06:10 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/02 14:36:37 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class   HumanA{
        
        private:
                std::string _name;
                Weapon &_weapon;

        public:
                HumanA(std::string name, Weapon &weapon);
                ~HumanA(void);
                std::string getName() const;
                void    attack(void);
                

};

#endif