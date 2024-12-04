/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriaco <yuriaco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:33:03 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/04 12:11:19 by yuriaco          ###   ########.fr       */
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

                std::string getName() const;
};

Zombie*		newZombie( std::string name );
void		randomChump( std::string name );

#endif