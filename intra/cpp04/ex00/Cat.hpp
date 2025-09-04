#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat(std::string na);
        Cat(const Cat& ob);
        ~Cat();
        Cat& operator= (const Cat& ob);
        void makeSound();
};

#endif