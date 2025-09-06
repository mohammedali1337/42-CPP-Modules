#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Base class: default constructor for " << this->type << " called " << std::endl;
}

Animal::Animal(std::string na): type(na)
{
    std::cout << "Base class: initialezed constructor for " << this->type << " called " << std::endl;
}

Animal::Animal(const Animal& ob)
{
    type = ob.type;
    std::cout << "Base class: cpy constructor for " << this->type << " called " << std::endl;
}

Animal::~Animal()
{
    std::cout << "Base class: destructor for " << this->type << " called " << std::endl;
}

Animal& Animal::operator= (const Animal& ob)
{
    if (this != &ob)
    {
        type = ob.type;
    }
    std::cout << "Base class: assignment operator for " << this->type << " called " << std::endl;
    return *this;
}

std::string Animal::getType() const 
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "Base class: Animal " << this->type << " made a sound " << std::endl;
}