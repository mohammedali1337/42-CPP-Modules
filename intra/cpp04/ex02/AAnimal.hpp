#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(std::string na);
        AAnimal(const AAnimal& ob);
        virtual ~AAnimal();
        AAnimal& operator= (const AAnimal& ob);
        virtual void makeSound() const = 0;

        virtual std::string getType() const;
};

#endif