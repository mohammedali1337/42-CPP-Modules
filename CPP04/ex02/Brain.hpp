#ifndef BRAIN_HPP
#define BRAIN_HPP
#include "AAnimal.hpp"
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public: 
        Brain();
        Brain(const Brain& ob);
        ~Brain();
        Brain& operator= (const Brain& ob);
        std::string getIdeas() const;
};

#endif