#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(): AMateria("Ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice& other): AMateria(other) {}

Ice& Ice::operator= (const Ice& ob)
{
    if (this != &ob) {
            AMateria::operator=(ob);
        }
        return *this;
}

AMateria* Ice::clone() const
{
    Ice* newIce = new Ice();
    return newIce;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}