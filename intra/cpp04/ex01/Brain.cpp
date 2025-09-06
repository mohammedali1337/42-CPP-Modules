#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "default constructor for Brain called" << std::endl;
}

Brain::Brain(const Brain& ob)
{
    *this = ob;
    std::cout << "cpy constructor for Brain called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "destructor for Brain called" << std::endl;
}

Brain& Brain::operator= (const Brain& ob)
{
    *this = ob;
    std::cout << "assignment operator for Brain called " << std::endl;
    return *this;
}