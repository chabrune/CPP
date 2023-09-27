/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:52:37 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/27 18:36:37 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <cstring>

class Zombie
{
	std::string name;
	public:
	void announce( void );
	Zombie(std::string name);
	~Zombie();

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
