#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::~Ice()
{}

Ice::Ice(std::string const & type) : AMateria(type)
{}


Ice::Ice(Ice const & copy)
{
    *this = copy;
}

Ice& Ice::operator=(Ice const & rhs)
{
    return(*this);
}

Ice* Ice::clone() const
{
    Ice *clone = new Ice();
    return(clone);
}

std::string const & Ice::getType() const
{
    return(this->_type);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
