#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog")
{
    _Brain = new Brain();
    std::cout << "default constructor for " << this->type <<" called" << std::endl;
}

Dog::Dog(std::string na): AAnimal(na)
{
    _Brain = new Brain();
    std::cout << "initialezed constructor for " << this->type << " called" << std::endl;
}

Dog::Dog(const Dog& ob)
{
    this->_Brain = new Brain(*ob._Brain);
    type = ob.type;
    std::cout << "cpy constructor for " << this->type << " called" << std::endl;
}

Dog::~Dog()
{
    delete _Brain;
    std::cout << "destructor for " << this->type << " called"<< std::endl;
}

Dog& Dog::operator= (const Dog& ob)
{
    if (this != &ob)
    {
        type = ob.type;
    }
    std::cout << "cpy assignment operator for " << this->type << " called"<< std::endl;
    return *this;
}

std::string Dog::getType() const 
{
    return (this->type);
}

void Dog::makeSound() const
{
    std::cout << "3aw 3aw" << std::endl;
}