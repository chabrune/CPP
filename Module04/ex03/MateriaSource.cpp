#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
        this->_inventory[i] = 0;
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if(this->_inventory[i])
            delete this->_inventory[i];
    }
}

MateriaSource& MateriaSource::operator=(MateriaSource const & rhs)
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

MateriaSource::MateriaSource(MateriaSource const & copy)
{
     for(int i = 0; i < 4; i++)
    {
        if(copy._inventory[i])
            this->_inventory[i] = copy._inventory[i]->clone();
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    int i = 0;
    while(i < 4 && this->_inventory[i] != 0)
        i++;
    if(i >= 4)
    {
        std::cout << "Can't learn more than 4 Materia" << std::endl;
        delete m;
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

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    if(type != "cure" && type != "ice")
    {
        std::cout << "Check Materia type" << std::endl;
        return(0);
    }
    while(i < 4 && this->_inventory[i]->getType() != type)
        i++;
    if(i >= 4)
        return(0);
    return(this->_inventory[i]->clone());
}