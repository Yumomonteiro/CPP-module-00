/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:37:48 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/06 16:01:10 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class   Fixed{

	private:
		
		int     _fixedNumber;
		static const int _bit = 8;

	public:

		Fixed();	
		Fixed( int num );
		Fixed &operator=( const Fixed& obj );		
	      	~Fixed();
	       int getRawBits( void ) const;
	       void setRawBits( int const raw );       
};

#endif