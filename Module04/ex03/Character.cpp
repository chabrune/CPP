#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
    for(int i = 0; i < 4; i++)
        this->_inventory[i] = 0;

}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if(this->_inventory[i])
            delete this->_inventory[i];
    }
}

Character::Character(Character const & copy)
{
    for(int i = 0; i < 4; i++)
    {
        if(copy._inventory[i])
            this->_inventory[i] = copy._inventory[i]->clone();
    }
}

Character& Character::operator=(Character const & rhs)
{
    for(int i = 0; i < 4; i++)
    {
        if(this->_inventory[i])
            delete this->_inventory[i];
        if(rhs._inventory[i])
            this->_inventory[i] = rhs._inventory[i]->clone();
    }
    return(*this);
}

std::string const & Character::getName() const
{
    return(_name);
}

void Character::equip(AMateria *m)
{
    int i = 0;
    while(i < 4 && this->_inventory[i] != 0)
        i++;
    if(i >= 4)
    {
        std::cout << "Inventory is full" << std::endl;
        return;
    }
    if(!m)
        return;
    for(int i = 0; i < 4; i++)
    {
        if(!this->_inventory[i])
        {
            this->_inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
   if(idx < 0 || idx > 4)
    {
        std::cout << "Error : index must be between 0 and 4" << std::endl;
        return;
    }
    if(!(this->_inventory[idx]))
        return;
    AMateria *save = this->_inventory[idx];
    this->_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
    if(idx < 0 || idx > 4)
    {
        std::cout << "Error : index must be between 0 and 4" << std::endl;
        return;
    }
    if(!(this->_inventory[idx]))
        return;
    this->_inventory[idx]->use(target);
}

AMateria* Character::getAMateria(int idx) const
{
    return(this->_inventory[idx]);
}