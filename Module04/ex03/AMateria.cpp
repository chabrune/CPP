#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::~AMateria()
{}

AMateria::AMateria(AMateria const & ref)
{
    *this = ref;
}

AMateria& AMateria::operator=(AMateria const & rhs)
{
    this->_type = rhs.type;
    return(*this);
}

AMateria::AMateria(std::string const & type) : _type(type)
{}

std::string const & AMateria::getType( void ) const
{
    return(this->_type);
}

AMateria* AMateria::clone( void ) const
{
    return(*this);
}

void AMateria::use(ICharacter& target)
{
    return;
}
