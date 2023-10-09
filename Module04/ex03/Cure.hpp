#ifndef CURE_HPP
# define CURE_HPP

class Cure : public AMateria
{
    public:
    Cure();
    Cure(Cure const & ref);
    ~Cure();
    Cure& operator=(Cure const & rhs);
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif