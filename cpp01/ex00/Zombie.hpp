/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:33:03 by yude-oli          #+#    #+#             */
/*   Updated: 2024/11/27 11:53:17 by yude-oli         ###   ########.fr       */
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
                Zombie(const std::string &name);                
                ~Zombie(void);
                void  announce( void );

                std::string getName() const { return _name; }
};

Zombie*		newZombie( std::string name );
void		randomChump( std::string name );

#endif