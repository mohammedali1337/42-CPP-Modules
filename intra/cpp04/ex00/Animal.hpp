#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string na);
        Animal(const Animal& ob);
        ~Animal();
        Animal& operator= (const Animal& ob);
        virtual void makeSound() const;

        virtual std::string getType() const;
};

#endif