/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:41:00 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/08 16:35:27 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & copy)
{
    *this = copy;
    std::cout << "WrongAnimal Constructor copy called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & rhs)
{
    this->type = rhs.type;
    std::cout << "WrongAnimal assignment operator called" << std::endl;

    return(*this);
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "WrongAnimal sound" << std::endl;
    return;
}

std::string WrongAnimal::getType( void ) const
{
    return(this->type);
}
