/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:22:01 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/30 18:53:57 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string _name )
{
	Zombie *zombies = new Zombie[N];
	for(int i = 0; i < N; i++)
		zombies[i].setName(_name);
	return(zombies);
}
