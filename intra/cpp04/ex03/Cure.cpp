#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure& ob): AMateria(ob) {}

Cure& Cure::operator= (const Cure& ob)
{
    if (this != &ob)
            AMateria::operator=(ob);
        return *this;
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
}