// =============================
// 42 C++ Module 04 — ex03
// Fully working, clean solution
// Build: g++ -std=c++98 -Wall -Wextra -Werror *.cpp -o ex03
// =============================

// ---------- AMateria.hpp ----------
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
protected:
    std::string type;

public:
    AMateria();
    explicit AMateria(std::string const & type);
    AMateria(AMateria const & other);
    AMateria & operator=(AMateria const & other);
    virtual ~AMateria();

    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif // AMATERIA_HPP

// ---------- AMateria.cpp ----------
// #include "AMateria.hpp"
// #include "ICharacter.hpp"

AMateria::AMateria() : type() {}

AMateria::AMateria(std::string const & type) : type(type) {}

AMateria::AMateria(AMateria const & other) : type(other.type) {}

AMateria & AMateria::operator=(AMateria const & other)
{
    if (this != &other)
        type = other.type;
    return *this;
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const { return type; }

void AMateria::use(ICharacter& /*target*/)
{
    // base: no-op
}

// ---------- ICharacter.hpp ----------
#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

// #include <string>

class AMateria;

class ICharacter
{
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

#endif // ICHARACTER_HPP

// ---------- IMateriaSource.hpp ----------
#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

// #include <string>

class AMateria;

class IMateriaSource
{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif // IMATERIASOURCE_HPP

// ---------- Character.hpp ----------
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

// #include "ICharacter.hpp"
// #include "AMateria.hpp"

class Character : public ICharacter
{
private:
    std::string name;
    AMateria* inventory[4];

    void clearInventory();          // why: avoid leaks
    void copyInventory(Character const & other); // why: deep-copy

public:
    explicit Character(std::string const & name);
    Character(Character const & other);
    Character & operator=(Character const & other);
    virtual ~Character();

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif // CHARACTER_HPP

// ---------- Character.cpp ----------
// #include "Character.hpp"
// #include <cstddef>

Character::Character(std::string const & name) : name(name)
{
    for (int i = 0; i < 4; ++i) inventory[i] = NULL;
}

Character::Character(Character const & other) : name(other.getName())
{
    for (int i = 0; i < 4; ++i) inventory[i] = NULL;
    copyInventory(other);
}

Character & Character::operator=(Character const & other)
{
    if (this != &other)
    {
        name = other.getName();
        clearInventory();
        copyInventory(other);
    }
    return *this;
}

Character::~Character()
{
    clearInventory();
}

std::string const & Character::getName() const { return name; }

void Character::equip(AMateria* m)
{
    if (!m) return;
    for (int i = 0; i < 4; ++i)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4) return;
    inventory[idx] = NULL; // do not delete
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4) return;
    if (inventory[idx]) inventory[idx]->use(target);
}

void Character::clearInventory()
{
    for (int i = 0; i < 4; ++i)
    {
        if (inventory[i])
        {
            delete inventory[i];
            inventory[i] = NULL;
        }
    }
}

void Character::copyInventory(Character const & other)
{
    for (int i = 0; i < 4; ++i)
    {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
}

// ---------- Ice.hpp ----------
#ifndef ICE_HPP
#define ICE_HPP

// #include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(Ice const & other);
    Ice & operator=(Ice const & other);
    virtual ~Ice();

    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif // ICE_HPP

// ---------- Ice.cpp ----------
// #include "Ice.hpp"
// #include "ICharacter.hpp"
// #include <iostream>

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const & other) : AMateria(other) {}

Ice & Ice::operator=(Ice const & other)
{
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

Ice::~Ice() {}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

// ---------- Cure.hpp ----------
#ifndef CURE_HPP
#define CURE_HPP

// #include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure(Cure const & other);
    Cure & operator=(Cure const & other);
    virtual ~Cure();

    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif // CURE_HPP

// ---------- Cure.cpp ----------
// #include "Cure.hpp"
// #include "ICharacter.hpp"
// #include <iostream>

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const & other) : AMateria(other) {}

Cure & Cure::operator=(Cure const & other)
{
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

Cure::~Cure() {}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

// ---------- MateriaSource.hpp ----------
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

// #include "IMateriaSource.hpp"
// #include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria* storage[4];

    void clearStorage();
    void copyStorage(MateriaSource const & other);

public:
    MateriaSource();
    MateriaSource(MateriaSource const & other);
    MateriaSource & operator=(MateriaSource const & other);
    virtual ~MateriaSource();

    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const & type);
};

#endif // MATERIASOURCE_HPP

// ---------- MateriaSource.cpp ----------
// #include "MateriaSource.hpp"
// #include <cstddef>

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; ++i) storage[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & other)
{
    for (int i = 0; i < 4; ++i) storage[i] = NULL;
    copyStorage(other);
}

MateriaSource & MateriaSource::operator=(MateriaSource const & other)
{
    if (this != &other)
    {
        clearStorage();
        copyStorage(other);
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    clearStorage();
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m) return;
    for (int i = 0; i < 4; ++i)
    {
        if (storage[i] == NULL)
        {
            storage[i] = m; // take ownership of prototype
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; ++i)
    {
        if (storage[i] && storage[i]->getType() == type)
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

// ---------- main.cpp ----------
// #include "IMateriaSource.hpp"
// #include "MateriaSource.hpp"
// #include "Ice.hpp"
// #include "Cure.hpp"
// #include "ICharacter.hpp"
// #include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;
}
