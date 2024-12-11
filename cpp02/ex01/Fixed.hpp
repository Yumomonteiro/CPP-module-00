/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:37:48 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/07 14:35:47 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>

class   Fixed{

	private:
		
		int                     _fixedNumber;
		static const int        _bit = 8;

	public:
                //canonical constructors
		Fixed(); //default constructor
                Fixed( const Fixed& copy ); //copy constructor
		Fixed &operator=( const Fixed& obj ); //assignment operator	
	      	~Fixed(); //destructor
                // more ex01 constructors

                Fixed(const int raw);
                Fixed(const float raw);
                
                //member functions
                float   toFloat( void ) const;
                int     toInt( void ) const;
                
                int     getRawBits( void ) const;
                void    setRawBits( int const raw );       
};

std::ostream& operator<<(std::ostream& outputStream, const Fixed &fixed);
#endif