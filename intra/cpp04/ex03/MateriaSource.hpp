#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria* storage[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& ob);
        MateriaSource & operator= (const MateriaSource& ob);
        ~MateriaSource();
    
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};


#endif