#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::~Cure()
{}

Cure::Cure(std::string const & type) : AMateria(type)
{}


Cure::Cure(Cure const & copy)
{
    *this = copy;
}

Cure& Cure::operator=(Cure const & rhs)
{
    (void)rhs;
    return(*this);
}

Cure* Cure::clone() const
{
    Cure *clone = new Cure();
    return(clone);
}

std::string const & Cure::getType() const
{
    return(this->_type);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
