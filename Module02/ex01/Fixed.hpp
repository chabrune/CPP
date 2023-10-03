/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:07:19 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/03 18:11:08 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP


# include <iostream>
# include <cmath>

class Fixed
{
	private:
	int	_value;
	static const int _fractionalBits;

	public:
	Fixed( void );
	Fixed(const float floatingPoint);
	Fixed(const int integer);
	Fixed(Fixed const & copy);
	~Fixed( void );
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed & operator=(Fixed const & rhs);
	int getRawBits( void ) const;
	void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &str, Fixed const &fixed_nbr);


#endif
