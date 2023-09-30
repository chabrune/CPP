/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:50:41 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/30 21:00:10 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) : _type(name){
}

Weapon::~Weapon(){
}

const std::string& Weapon::getType(){
	return(this->_type);
}

void Weapon::setType(std::string new_type){
	this->_type = new_type;
}
