/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:21:55 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/30 19:26:31 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int nb = 5;
	Zombie *horde = zombieHorde(nb, "Foo");
	for(int i = 0; i < nb; i++)
		horde[i].announce();
	delete [] horde;
}
