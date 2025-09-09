#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const & type): type(type){}

AMateria::AMateria(AMateria const & ob): type(ob.type){}

AMateria::~AMateria(){}

AMateria & AMateria::operator=(const AMateria & ob)
{
    if (this != &ob)
    {
        this->type = ob.type;
    }
    return (*this);
}

std::string const & AMateria::getType() const {return (this->type);}

void AMateria::use(ICharacter& target) {}