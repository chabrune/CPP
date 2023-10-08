/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:37:24 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/08 17:19:23 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : type("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(Cat const & copy)
{
    *this = copy;
    std::cout << "Cat Constructor copy called" << std::endl;
}

Cat& Cat::operator=(Cat const & rhs)
{
    this->type = rhs.type;
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
