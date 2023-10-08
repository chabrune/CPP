/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:25:19 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/05 20:19:43 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

bool ClapTrap::alreadyDead = false;

ClapTrap::ClapTrap() : _Health(10), _Attack(0), _Energy(10){
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _Health(10), _Attack(0), _Energy(10){
    std::cout << "ClapTrap Name Constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
    *this = copy;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    this->_name = rhs._name;
    this->_Attack = rhs._Attack;
    this->_Energy = rhs._Energy;
    this->_Health = rhs._Health;
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    return(*this);
}

void ClapTrap::attack(const std::string& target)
{
    if(this->_Energy == 0)
    {
        std::cout << "No remaining Energy points" << std::endl;
        return;
    } 
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ",  causing " << this->_Attack << " points of damage" << std::endl;
    this->_Energy -= 1;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(alreadyDead == true)
    {
        std::cout << "Poor " << this->_name << " he is already dead, stop the massacre..." << std::endl;
        return;
    }
    if(amount >= this->_Health)
    {
        alreadyDead = true;
        std::cout << "ClapTrap " << this->_name << " has taken " << amount << " points of damage causing his death... RIP" << std::endl;
        return; 
    }
    std::cout << "ClapTrap " << this->_name <<  " has taken " << amount << " points of damage" << std::endl;
    this->_Health -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->_Energy == 0)
    {
        std::cout << "ClapTrap " << this->_name << " hasn't enough energy points" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " recovered " << amount << " health points" << std::endl;
    this->_Health += amount;
    this->_Energy -= 1; 
}

unsigned int ClapTrap::getAttack() const
{
    return(this->_Attack);
}

std::string ClapTrap::getName() const
{
    return(this->_name);
}

unsigned int ClapTrap::getEnergy() const
{
    return(this->_Energy);
}

unsigned int ClapTrap::getHealth() const
{
    return(this->_Health);
}