/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:13:26 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/05 14:46:16 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

float Fixed::pow(float base, int exp)
{
    if (exp == 0)
        return 1.0;
    if (exp == 1)
        return (base);
    float result = 1.0;
    if (exp < 0)
	{
        base = 1.0 / base;
        exp = -exp;
    }
    while (exp > 0)
	{
        result *= base;
        exp--;
    }
    return (result);
}

const int Fixed::_fractionalBits = 8;

Fixed::Fixed( void ) : _value(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

// Fixed::Fixed(const int integer) : _value(integer << _fractionalBits){}
Fixed::Fixed(const int integer) : _value(integer * pow(2, _fractionalBits)){}

Fixed::Fixed(const float floatingPoint) : _value(roundf(floatingPoint * pow(2, _fractionalBits))){}
// Fixed::Fixed(const float floatingPoint) : _value((roundf(floatingPoint * (1 << _fractionalBits)))){}
// Revient a * 256 ou 2^8 
float Fixed::toFloat( void ) const
{
    return (static_cast<float>(_value) / (1 << _fractionalBits));
    // return (static_cast<float>(_value) / 256);
}

int Fixed::toInt( void ) const
{
    // return (_value / 256);
    return (_value >> _fractionalBits);
}

Fixed::~Fixed( void )
{
	std::cout << "Destrcutor called" << std::endl;
}

Fixed::Fixed(Fixed const & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return(*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_value);
}

void	Fixed::setRawBits(const int raw)
{
	this->_value = raw;
}
std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr)
{
	return (str << fixed_nbr.toFloat());
}
