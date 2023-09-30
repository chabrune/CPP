/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:07:43 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/30 20:59:38 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
}

HumanB::~HumanB(){
}

void HumanB::attack(){
	std::cout << this->_name << " attack with their " << this->_weaponB->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon){
	this->_weaponB = &weapon;
}
