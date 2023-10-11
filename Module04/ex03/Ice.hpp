#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
    Ice();
    ~Ice();
    Ice& operator=(Ice const & rhs);
    Ice(Ice const & copy);
    Ice(std::string const & type);
    Ice* clone() const;
    void use(ICharacter& target);
    std::string const & getType() const;
};

#endif
