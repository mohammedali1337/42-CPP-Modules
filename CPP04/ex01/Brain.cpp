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
    if (this != &ob)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = ob.ideas[i];
    }
    std::cout << "assignment operator for Brain called " << std::endl;
    return *this;
}

std::string Brain::getIdeas() const
{
    return (*this->ideas);
}