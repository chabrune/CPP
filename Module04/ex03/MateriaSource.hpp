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
    void learnMateria(AMateria*) = 0;
    AMateria* createMateria(std::string const & type) = 0;
};

#endif