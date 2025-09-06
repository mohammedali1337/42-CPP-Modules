#ifndef BRAIN_HPP
#define BRAIN_HPP
#include "Animal.hpp"

class Brain
{
    private:
        std::string ideas[100];
    public: 
        Brain();
        Brain(std::string na);
        Brain(const Brain& ob);
        ~Brain();
        Brain& operator= (const Brain& ob);
};

#endif