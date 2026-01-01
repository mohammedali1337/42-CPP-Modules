#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "wrong.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();


    delete meta;
    delete j;
    delete i;

    // WrongAnimal && WrongCat test

    std::cout << std::endl;
    std::cout << "WrongAnimal : " << std::endl ;
    std::cout << std::endl;

    const WrongAnimal *WrongOb = new WrongCat();
    std::cout << WrongOb->getType() << " " << std::endl;
    WrongOb->makeSound();


    delete WrongOb;

    return 0;
}