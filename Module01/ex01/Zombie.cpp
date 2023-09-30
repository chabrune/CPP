/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:21:58 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/30 19:26:32 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	this->_name = "(null)";
	std::cout << "Object " << this->_name << " created" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name){
	std::cout << "Object " << this->_name << " created" << std::endl;
}

void	Zombie::setName(std::string name){
	this->_name = name;
}

void	Zombie::announce(void){
	std::cout  << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){
	std::cout << this->_name << " destroyed" << std::endl;
}
