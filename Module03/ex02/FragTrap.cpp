/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:15:03 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/06 14:24:24 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->_Attack = 30;
    this->_Energy = 100;
    this->_Health = 100;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_Attack = 30;
    this->_Energy = 100;
    this->_Health = 100;
    this->_name = name;
    std::cout << "FragTrap name constructor called" << std::endl;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy)
{
    std::cout << "FragTrap constructor copy called" << std::endl;
    *this = copy;
}

FragTrap& FragTrap::operator=(FragTrap const & rhs)
{
    this->_Attack = rhs._Attack;
    this->_Energy = rhs._Energy;
    this->_Health = rhs._Health;
    this->_name = rhs._name;
    std::cout << "FragTrap overload assigment called" << std::endl;
    return(*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "HIGH FIVES MF" << std::endl;
}
