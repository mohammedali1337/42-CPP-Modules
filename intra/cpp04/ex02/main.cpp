#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    {
        AAnimal *anml = new Cat();
        anml->makeSound();
        delete anml;
    }
    {
        AAnimal *anml = new Dog();
        anml->makeSound();
        delete anml;
    }

    return 0;
}
