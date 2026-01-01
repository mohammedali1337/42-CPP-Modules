#include "wrong.hpp"


WrongAnimal::WrongAnimal()
{
    std::cout << "default constructor for WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string na): type(na)
{
    std::cout << "initialezed constructor for WrongAnimal is called " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& ob)
{
    type = ob.type;
    std::cout << "cpy constructor for WrongAnimal is called " << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "destructor for WrongAnimal called " << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& ob)
{
    if (this != &ob)
    {
        type = ob.type;
    }
    std::cout << "cpy assignment operator for WrongAnimal called " << std::endl;
    return *this;
}

std::string WrongAnimal::getType() const 
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal made a sound" << std::endl;
}

// wrong WrongCat

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    std::cout << "default constructor for WrongCat called" << std::endl;
}

WrongCat::WrongCat(std::string na): WrongAnimal(na)
{
    std::cout << "initialezed constructor for WrongCat is called " << std::endl;
}

WrongCat::WrongCat(const WrongCat& ob)
{
    type = ob.type; 
    std::cout << "cpy constructor for WrongCat is called " << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "destructor for WrongCat called " << std::endl;
}

WrongCat& WrongCat::operator= (const WrongCat& ob)
{
    if (this != &ob)
    {
        type = ob.type;
    }
    std::cout << "cpy assignment operator for WrongCat called " << std::endl;
    return *this;
}

std::string WrongCat::getType() const 
{
    return (this->type);
}

void WrongCat::makeSound() const
{
    std::cout << "meooow miaw" << std::endl;
}