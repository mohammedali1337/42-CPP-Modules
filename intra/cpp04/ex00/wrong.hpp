#ifndef WRONG_HPP
#define WRONG_HPP
#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string na);
        WrongAnimal(const WrongAnimal& ob);
        virtual ~WrongAnimal();
        WrongAnimal& operator= (const WrongAnimal& ob);
    
        void makeSound() const;

        std::string getType() const;
};


class WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string na);
        WrongCat(const WrongCat& ob);
        ~WrongCat();
        WrongCat& operator= (const WrongCat& ob);

        void makeSound() const;

        std::string getType() const;
};

#endif