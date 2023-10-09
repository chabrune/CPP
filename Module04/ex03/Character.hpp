#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "Character.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
    private:
    std::string name;


    public:
    Character();
    ~Character();
    Character(Character const & copy);
    Character& operator=(Character const & rhs);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

};

#endif
