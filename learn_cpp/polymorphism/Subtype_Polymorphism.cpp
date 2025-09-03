#include <iostream>
using namespace std;

class Animal {
    public:
        virtual void sound() {
            cout << "Some generic animal sound\n";
        }
};


class Dog : public Animal {
    public:
        void sound() {
            cout << "Bark\n";
        }
};




class Cat : public Animal {
    public:
        void sound() {
            cout << "Meow\n";
        }
};


int main(void)
{
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->sound();
    a2->sound();

    delete a1;
    delete a2;
    return 0;
}