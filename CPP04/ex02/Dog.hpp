#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
    private:
        Brain *_Brain;
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