/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:37:24 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/08 19:37:27 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : type("Cat")
{
    this->_attribut = new Brain();
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::~Cat()
{
    delete this->_attribut;
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(Cat const & copy)
{
    this->type = copy.type;
    this->_attribut = new Brain(*(copy._attribut));
    std::cout << "Cat Constructor copy called" << std::endl;
}

Cat& Cat::operator=(Cat const & rhs)
{
    this->type = rhs.type;
    if(this->_attribut)
        delete _attribut;
    this->_attribut = new Brain(*(rhs._attribut));
    std::cout << "Cat assignment operator called" << std::endl;
    return(*this);
}


void Cat::makeSound( void ) const
{
    std::cout << "MIAOU" << std::endl;
}

std::string Cat::getType( void ) const
{
    return(this->type);
}
