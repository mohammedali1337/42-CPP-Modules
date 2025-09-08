#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const & type): type(type){}

AMateria::AMateria(AMateria const & ob): type(ob.type){}

AMateria::~AMateria(){}

std::string const & AMateria::getType() const {return (this->type);}

// AMateria* AMateria::clone() const {}

void AMateria::use(ICharacter& target) {}