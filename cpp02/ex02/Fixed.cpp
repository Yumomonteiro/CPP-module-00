/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:37:57 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/11 13:18:17 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Orthodox Canonical Form
Fixed::Fixed(){
        _fixedNumber = 0;
        //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& copy ){
        //std::cout << "Copy constructor called" << std::endl;
        *this = copy;
}

Fixed& Fixed::operator=( const Fixed& obj ){
	//std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(obj.getRawBits());
	return (*this);
}

Fixed::~Fixed(){
        //std::cout << "Destructor called" << std::endl;
}

// Ex01 constructors

Fixed::Fixed(const int raw){
        //std::cout << "Int constructor called" << std::endl;
        this->_fixedNumber = raw << _bit;
}

Fixed::Fixed(const float raw){
        //std::cout << "Float constructor called" << std::endl;
        this->_fixedNumber = roundf(raw * (1 << _bit));
}

// Member functions

int Fixed::toInt( void ) const{
        return (_fixedNumber >> _bit); 
        // fixed number / 2^8(256)
}

float Fixed::toFloat( void ) const{
        return ((float)_fixedNumber / (1 << _bit));
        
}


int Fixed::getRawBits( void ) const{
        //std::cout << "getRawBits member function called" << std::endl;
        return (_fixedNumber);
}
void Fixed::setRawBits( int const raw ){
        this->_fixedNumber = raw;
}

// ----------------ex02 member functions----------------------//

Fixed    &Fixed::min(Fixed &a, Fixed &b)
{
        return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed    &Fixed::max(Fixed &a, Fixed &b)
{
        return (a.getRawBits() > b.getRawBits() ? a : b);
}

const Fixed      &Fixed::min(const Fixed &a, const Fixed &b)
{
        return (a.getRawBits() < b.getRawBits() ? a : b);
}

const Fixed      &Fixed::max(const Fixed &a, const Fixed &b)
{
        return (a.getRawBits() > b.getRawBits() ? a : b);
}

// ----------------------Operators----------------------------//

Fixed Fixed::operator+(const Fixed &obj) const{
        return (Fixed(this->toFloat() + obj.toFloat()));
}

Fixed Fixed::operator-(const Fixed &obj) const{
        return (Fixed(this->toFloat() - obj.toFloat()));
}

Fixed Fixed::operator*(const Fixed &obj) const{
        return (Fixed(this->toFloat() * obj.toFloat()));
}

Fixed Fixed::operator/(const Fixed &obj) const{
        return (Fixed(this->toFloat() / obj.toFloat()));
}


// ----------------Increment and Decrement operators-----------//

Fixed &Fixed::operator++(){
        this->_fixedNumber++;
        return (*this);
}

Fixed Fixed::operator++(int){
        Fixed tmp(*this);
        operator++();
        return (tmp);
}

Fixed &Fixed::operator--(){
        this->_fixedNumber--;
        return (*this);
}

Fixed Fixed::operator--(int){
        Fixed tmp(*this);
        operator--();
        return (tmp);
}

// ------------------Comparison operators------------------//

bool Fixed::operator>(const Fixed &obj) const{
        return (this->toFloat() > obj.toFloat());
}

bool Fixed::operator<(const Fixed &obj) const{
        return (this->toFloat() < obj.toFloat());
}

bool Fixed::operator>=(const Fixed &obj) const{
        return (this->toFloat() >= obj.toFloat());
}

bool Fixed::operator<=(const Fixed &obj) const{
        return (this->toFloat() <= obj.toFloat());
}

bool Fixed::operator==(const Fixed &obj) const{
        return (this->toFloat() == obj.toFloat());
}

bool Fixed::operator!=(const Fixed &obj) const{
        return (this->toFloat() != obj.toFloat());
}

// Operator overload

std::ostream& operator<<(std::ostream& outputStream, const Fixed &fixed){
        outputStream << fixed.toFloat();
        return (outputStream);
}