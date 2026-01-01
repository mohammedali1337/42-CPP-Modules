#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria* storage[4];

        void clearStorage();
        void copyStorage(MateriaSource const & other);
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& ob);
        MateriaSource & operator= (const MateriaSource& ob);
        ~MateriaSource();
    
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};


#endif