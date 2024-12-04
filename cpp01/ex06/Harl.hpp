/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriaco <yuriaco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:05:00 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/04 11:16:56 by yuriaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class   Harl
{
        private:

                void debug( void );
                void info( void );
                void warning( void );
                void error( void );

        public:
                Harl();
                ~Harl();

                void complain( std::string level );
};

#endif