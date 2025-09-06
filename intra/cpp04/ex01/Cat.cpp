#include "Cat.hpp"

Cat::Cat(): Animal("cat")
{
    _Brain = new Brain();
    std::cout << "default constructor for " << this->type << " called" << std::endl;

}

Cat::Cat(std::string na): Animal(na)
{
    _Brain = new Brain();
    std::cout << "initialezed constructor for " << this->type << " called" << std::endl;
}

Cat::Cat(const Cat& ob)
{
    type = ob.type;
    std::cout << "cpy constructor for " << this->type << " called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "destructor for " << this->type << " called" << std::endl;
}

Cat& Cat::operator= (const Cat& ob)
{
    if (this != &ob)
    {
        type = ob.type;
    }
    std::cout << "cpy assignment operator for " << this->type << " called" << std::endl;
    return *this;
}

std::string Cat::getType() const 
{
    return (this->type);
}

void Cat::makeSound() const
{
    std::cout << "meooow miaw" << std::endl;
}