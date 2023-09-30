/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:07:43 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/30 20:59:40 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _weaponA(type), _name(name){
}

HumanA::~HumanA(){
}

void HumanA::attack(){
	std::cout << this->_name << " attack with their " << _weaponA.getType() << std::endl;
}
