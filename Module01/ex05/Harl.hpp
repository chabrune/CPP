/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:11:33 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/01 17:03:39 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
#  include <string>

class Harl
{
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
