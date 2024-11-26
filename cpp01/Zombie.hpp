/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:33:03 by yude-oli          #+#    #+#             */
/*   Updated: 2024/11/26 19:13:07 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class   Zombie{
        private:
                std::string _name;
        public:
                Zombie(const std::string& name) : _name(name) {}
                void announce( void );
                //getters
                std::string getName() const { return _name; }
                
        
};

#endif