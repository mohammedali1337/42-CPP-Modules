#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        storage[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& ob)
{
    for (int i = 0; i < 4; i++)
    {
        if (ob.storage[i])
            storage[i] = ob.storage[i]->clone();
        else
            storage[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& ob)
{
    if (this != &ob)
    {
        for (int i = 0; i < 4; i++)
        {
            if (storage[i])
                delete storage[i];
            if (ob.storage[i])
                storage[i] = ob.storage[i]->clone();
            else
                storage[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (storage[i])
            delete storage[i];
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (!this->storage[i])
        {
            this->storage[i] = m;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->storage[i] && storage[i]->getType() == type)
            return storage[i]->clone();
    }
    return NULL;
}