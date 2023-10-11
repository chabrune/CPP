#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <ICharacter.hpp>

class AMateria
{
    protected:
    const std::string _type;

    public:
    // AMateria &operator=(AMateria const & rhs);
    AMateria();
    virtual ~AMateria();
    AMateria(AMateria const & copy);
    AMateria(std::string const & type);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif;