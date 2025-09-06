#include "Brain.hpp"

Brain::Brain():
{
    std::cout << "default constructor for Brain called" << std::endl;
}

Brain::Brain(std::string na): Animal(na)
{
    std::cout << "initialezed constructor for Brain called" << std::endl;
}

Brain::Brain(const Brain& ob)
{
    type = ob.type;
    std::cout << "cpy constructor for Brain called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "destructor for Brain called" << std::endl;
}

Brain& Brain::operator= (const Brain& ob)
{
    if (this != &ob)
    {
        type = ob.type;
    }
    std::cout << "cpy assignment operator for Brain called" << std::endl;
    return *this;
}

std::string Brain::getType() const 
{
    return (this->type);
}