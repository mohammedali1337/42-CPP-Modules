#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure& ob): AMateria(ob) {}

Cure& Cure::operator= (const Cure& ob)
{
    if (this != &ob) {
            AMateria::operator=(ob);
        }
        return *this;
}

AMateria* Cure::clone() const
{
    Cure* newCure = new Cure();
    return newCure;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< this->getName() << "’s wounds *" << std::endl;
}