#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <cstring>

class AMateria
{
    protected:
    std::string _type;

    public:
    AMateria();
    AMateria(AMateria const & ref);
    ~AMateria();
    AMateria& operator=(AMateria const & rhs);
    AMateria(std::string const & type);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone( void ) const = 0;
    virtual void use(ICharacter& target);
};

#endif