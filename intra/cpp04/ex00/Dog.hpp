#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(std::string na);
        Dog(const Dog& ob);
        ~Dog();
        Dog& operator= (const Dog& ob);
        void makeSound() const;

        std::string getType() const;
};

#endif