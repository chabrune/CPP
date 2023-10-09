#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::~Cure()
{}

Cure::Cure(Cure const & ref) : AMateria("cure")
{
    *this = ref;
}
Cure& Cure::operator=(Cure const & rhs)
{
    this->type = rhs.type;
    return(*this);
}

AMateria* Cure::clone() const
{
    return(new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target->getName() << "'s wounds *" << std::endl;
}