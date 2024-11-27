/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:49:14 by yude-oli          #+#    #+#             */
/*   Updated: 2024/11/27 12:29:49 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <string>

class   Zombie{
        private:
                std::string _name;
        public:
                Zombie(void);
                ~Zombie(void);

                void  announce( void );
                void  setName(std::string name);

                std::string getName() const { return _name; }
};

Zombie  *zombieHorde(int N, std::string name);

#endif