/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:37:48 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/09 12:50:35 by yude-oli         ###   ########.fr       */
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

		Fixed(const int raw);
		Fixed(const float raw);
		
		//member functions

		float                   toFloat( void ) const;
		int                     toInt( void ) const;
		
		int                     getRawBits( void ) const;
		void                    setRawBits( int const raw );   
		static Fixed            &min(Fixed &a, Fixed &b);
		static Fixed            &max(Fixed &a, Fixed &b);
		static const Fixed      &min(const Fixed &a, const Fixed &b);
		static const Fixed      &max(const Fixed &a, const Fixed &b);
		
		//operators constructor
		
		Fixed operator+(const Fixed &obj) const;
		Fixed operator-(const Fixed &obj) const;
		Fixed operator*(const Fixed &obj) const;
		Fixed operator/(const Fixed &obj) const;

		//increment and decrement operators
		
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
		
		//comparison operators
		bool operator>(const Fixed &obj) const;
		bool operator<(const Fixed &obj) const;
		bool operator>=(const Fixed &obj) const;
		bool operator<=(const Fixed &obj) const;
		bool operator==(const Fixed &obj) const;
		bool operator!=(const Fixed &obj) const;
};



std::ostream& operator<<(std::ostream& outputStream, const Fixed &fixed);
#endif