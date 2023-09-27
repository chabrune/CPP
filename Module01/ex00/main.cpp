/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:51:56 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/27 15:09:44 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	zombie1("Zombie1", "Walker");
	zombie1.announce();
	return 0;
}
