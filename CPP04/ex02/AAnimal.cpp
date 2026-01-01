#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "Base class: default constructor for " << this->type << " called " << std::endl;
}

AAnimal::AAnimal(std::string na): type(na)
{
    std::cout << "Base class: initialezed constructor for " << this->type << " called " << std::endl;
}

AAnimal::AAnimal(const AAnimal& ob)
{
    type = ob.type;
    std::cout << "Base class: cpy constructor for " << this->type << " called " << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "Base class: destructor for " << this->type << " called " << std::endl;
}

AAnimal& AAnimal::operator= (const AAnimal& ob)
{
    if (this != &ob)
    {
        type = ob.type;
    }
    std::cout << "Base class: assignment operator for " << this->type << " called " << std::endl;
    return *this;
}

std::string AAnimal::getType() const 
{
    return (this->type);
}

void AAnimal::makeSound() const
{
    std::cout << "Base class: AAnimal " << this->type << " made a sound " << std::endl;
}