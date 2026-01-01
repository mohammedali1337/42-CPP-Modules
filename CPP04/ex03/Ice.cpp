#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice& other): AMateria(other) {}

Ice& Ice::operator= (const Ice& ob)
{
    if (this != &ob)
            AMateria::operator=(ob);
        return *this;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}