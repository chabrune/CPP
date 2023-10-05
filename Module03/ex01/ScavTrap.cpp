/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:15:03 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/05 20:21:22 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->_Attack = 20;
    this->_Energy = 50;
    this->_Health = 100;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_Attack = 20;
    this->_name = name;
    this->_Energy = 50;
    this->_Health = 100;
    std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy)
{
    *this = copy;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const & rhs)
{
    this->_name = rhs._name;
    this->_Attack = rhs._Attack;
    this->_Energy = rhs._Energy;
    this->_Health = rhs._Health;
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    return(*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->_Energy == 0)
    {
        std::cout << "No remaining Energy points" << std::endl;
        return;
    } 
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ",  causing " << this->_Attack << " points of damage" << std::endl;
    this->_Energy -= 1;
}