#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        storage[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& ob)
{
    for (int i = 0; i < 4; ++i) storage[i] = NULL;
    copyStorage(ob);
}

MateriaSource& MateriaSource::operator=(const MateriaSource& ob)
{
    if (this != &ob)
    {
        clearStorage();
        copyStorage(ob);
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    this->clearStorage();
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

void MateriaSource::clearStorage()
{
    for (int i = 0; i < 4; ++i)
    {
        if (storage[i])
        {
            delete storage[i];
            storage[i] = NULL;
        }
    }
}

void MateriaSource::copyStorage(MateriaSource const & other)
{
    for (int i = 0; i < 4; ++i)
    {
        if (other.storage[i])
            storage[i] = other.storage[i]->clone();
        else
            storage[i] = NULL;
    }
}