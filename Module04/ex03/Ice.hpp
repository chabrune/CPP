#ifndef ICE_HPP
# define ICE_HPP

class Ice : public AMateria
{
    public:
    Ice();
    Ice(Ice const & ref);
    ~Ice();
    Ice& operator=(Ice const & rhs);
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif