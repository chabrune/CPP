/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:21:52 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/30 19:00:04 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iomanip>
# include <string>
# include <iostream>


class Zombie
{
	private:
	std::string _name;

	public:
	void announce( void  );
	void setName( std::string name);
	Zombie();
	Zombie(std::string name);
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif
