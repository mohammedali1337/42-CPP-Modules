#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    std::cout << "default constructor for Dog called" << std::endl;
}

Dog::Dog(std::string na): Animal(na)
{
    std::cout << "initialezed constructor for Dog is called " << std::endl;
}

Dog::Dog(const Dog& ob)
{
    type = ob.type;
    std::cout << "cpy constructor for Dog is called " << std::endl;
}

Dog::~Dog()
{
    std::cout << "destructor for Dog called " << std::endl;
}

Dog& Dog::operator= (const Dog& ob)
{
    if (this != &ob)
    {
        type = ob.type;
    }
    std::cout << "cpy assignment operator for Dog called " << std::endl;
    return *this;
}

void Dog::makeSound()
{
    std::cout << "3aw 3aw" << std::endl;
}