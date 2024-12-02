/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:05:00 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/02 18:08:36 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

                void complain( std::string level );
};