/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:37:46 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/08 15:39:00 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : type("Dog")
{
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(Dog const & copy)
{
    *this = copy;
    std::cout << "Dog Constructor copy called" << std::endl;
}

Dog& Dog::operator=(Dog const & rhs)
{
    this->type = rhs.type;
    std::cout << "Dog assignment operator called" << std::endl;
    return(*this);
}

void Dog::makeSound( void ) const
{
    std::cout << "WOUFWOUF" << std::endl;
}

std::string Dog::getType( void ) const
{
    return(this->type);
}
