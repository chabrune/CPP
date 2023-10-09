/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:37:46 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/08 19:58:18 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : type("Dog")
{
    this->_attribut = new Brain();
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::~Dog()
{
    delete this->_attribut;
    std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(Dog const & copy)
{
    this->type = copy.type;
    this->_attribut = new Brain(*(copy._attribut));
    std::cout << "Dog Constructor copy called" << std::endl;
}

Dog& Dog::operator=(Dog const & rhs)
{
    this->type = rhs.type;
    if(this->_attribut)
        delete _attribut;
    this->_attribut = new Brain(*(rhs._attribut));
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

Brain* Dog::getAttribut(void) const
{
    return(this->_attribut);
}