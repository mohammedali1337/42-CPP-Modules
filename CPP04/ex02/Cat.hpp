#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
    private:
        Brain *_Brain;
    public:
        Cat();
        Cat(std::string na);
        Cat(const Cat& ob);
        ~Cat();
        Cat& operator= (const Cat& ob);
        void makeSound() const;

        std::string getType() const;
};

#endif