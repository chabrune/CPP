#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "Destructor AMateria called" << std::endl;
}

// AMateria& AMateria::operator=(AMateria const & rhs)
// {}

AMateria::AMateria(AMateria const & copy) : _type(copy._type)
{}

void AMateria::use(ICharacter& target)
{}

std::string const &  AMateria::getType() const
{
    return(this->_type);
}

AMateria::AMateria(std::string const & type) : _type(type)
{}
