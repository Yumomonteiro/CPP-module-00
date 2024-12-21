/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:21:05 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/20 11:21:05 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
        public:
                FragTrap();
                FragTrap(std::string name);
                ~FragTrap();
                FragTrap(const FragTrap &copy);
                FragTrap &operator = (const FragTrap &copy);
                void highFivesGuys(void);
        private:
};

#endif