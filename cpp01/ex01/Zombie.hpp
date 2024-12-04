/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriaco <yuriaco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:49:14 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/04 11:45:43 by yuriaco          ###   ########.fr       */
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
                std::string getName() const; 
};

Zombie  *zombieHorde(int N, std::string name);

#endif