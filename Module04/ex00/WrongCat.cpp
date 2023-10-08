/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:42:38 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/08 15:46:16 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : type("WrongCat")
{
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & copy)
{
    *this = copy;
    std::cout << "WrongCat Constructor copy called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const & rhs)
{
    this->type = rhs.type;
    std::cout << "WrongCat assignment operator called" << std::endl;
    return(*this);
}


void WrongCat::makeSound( void ) const
{
    std::cout << "WRONG MIAOU" << std::endl;
}

std::string WrongCat::getType( void ) const
{
    return(this->type);
}
