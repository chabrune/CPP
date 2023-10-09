#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::~Ice()
{}

Ice::Ice(Ice const & ref) : AMateria("ice")
{
    *this = ref;
}

Ice& Ice::operator=(Ice const & rhs)
{
    this->type = rhs.type;
    return(*this);
}

AMateria* Ice::clone()
{
    return(new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target->getName() << " *" << std::endl;
}