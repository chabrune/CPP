/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:54:00 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/27 18:47:14 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}
Zombie::~Zombie()
{
	std::cout << this->name << ": Has been destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout  << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
