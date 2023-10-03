/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:07:19 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/03 15:41:30 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP


# include <iostream>

class Fixed
{
	private:
	int	_value;
	static const int bits;

	public:
	Fixed( void );
	Fixed(int value);
	Fixed(Fixed const & copy);
	~Fixed( void );
	Fixed & operator=(Fixed const & rhs);
	int getRawBits( void ) const;
	void setRawBits(int const raw);

};

#endif
