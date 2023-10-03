/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:13:26 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/03 17:45:59 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed( void ) : _value(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const int integer) : _value(integer << _fractionalBits){}

Fixed::Fixed(const float floatingPoint) : _value(static_cast<int>(floatingPoint * (1 << _fractionalBits))){}

float Fixed::toFloat( void ) const
{
    return (static_cast<float>(_value) / (1 << _fractionalBits));
}

int Fixed::toInt( void ) const
{
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
