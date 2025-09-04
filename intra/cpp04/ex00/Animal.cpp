#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "default constructor for Animal called" << std::endl;
}

Animal::Animal(std::string na): type(na)
{
    std::cout << "initialezed constructor for Animal is called " << std::endl;
}

Animal::Animal(const Animal& ob)
{
    type = ob.type;
    std::cout << "cpy constructor for Animal is called " << std::endl;
}

Animal::~Animal()
{
    std::cout << "destructor for Animal called " << std::endl;
}

Animal& Animal::operator= (const Animal& ob)
{
    if (this != &ob)
    {
        type = ob.type;
    }
    std::cout << "cpy assignment operator for Animal called " << std::endl;
    return *this;
}