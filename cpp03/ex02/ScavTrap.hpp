/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 16:48:42 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/14 16:48:42 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
        public:
                ScavTrap();
                ScavTrap(std::string name);
                ~ScavTrap(void);
                ScavTrap(const ScavTrap &copy);
                ScavTrap &operator = (const ScavTrap &copy);
                void attack(std::string const & target);
                void guardGate(void);
        private:
};

#endif