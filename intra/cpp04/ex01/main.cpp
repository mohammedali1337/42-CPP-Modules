#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "=== Test basic polymorphism ===" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j; 
    delete i;

    std::cout << "\n=== Test array of Animals ===" << std::endl;
    const int size = 4;
    const Animal* animals[size];

    for (int k = 0; k < size; k++)
    {
        if (k < size / 2)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
    }

    for (int k = 0; k < size; k++)
        delete animals[k];

    // deep copy 

    Dog basic;
    {
        Dog tmp = basic;
    }

    // assignment operator 

    Cat c1;
    Cat c2;
    c1 = c2;

    system("leaks EX_01");
    return 0;
}
