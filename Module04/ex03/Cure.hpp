#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
    Cure();
    ~Cure();
    Cure& operator=(Cure const & rhs);
    Cure(Cure const & copy);
    Cure(std::string const & type);
    Cure* clone() const;
    void use(ICharacter& target);
    std::string const & getType() const;
};

#endif