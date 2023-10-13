#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource& operator=(MateriaSource const & rhs);
    MateriaSource(MateriaSource const & copy);
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);

    private:
    AMateria *(_inventory[4]);
};

#endif