#include "ICharacter.hpp"

ICharacter::ICharacter(){};

ICharacter::ICharacter(const ICharacter& ob)
{
    *this = ob;
}

ICharacter& ICharacter::operator=(const ICharacter& ob)
{
    (void)ob;
    return *this;
}

ICharacter::~ICharacter(){}
