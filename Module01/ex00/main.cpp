/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:51:56 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/27 18:50:56 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	zombie1("Foo");
	zombie1.announce();
	Zombie *zombie2 = newZombie("Alloc");
	zombie2->announce();
	randomChump("Chump");
	delete zombie2;

	return (0);
}
