/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:28:46 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/08 19:51:32 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(Animal const & copy)
{
    *this = copy;
    std::cout << "Animal Constructor copy called" << std::endl;
}

Animal& Animal::operator=(Animal const & rhs)
{
    this->type = rhs.type;
    std::cout << "Animal assignment operator called" << std::endl;

    return(*this);
}

void Animal::makeSound( void ) const
{
    std::cout << "Animal sound" << std::endl;
    return;
}

std::string Animal::getType( void ) const
{
    return(this->type);
}

Brain* Animal::getAttribut() const
{
    return(0);
}
