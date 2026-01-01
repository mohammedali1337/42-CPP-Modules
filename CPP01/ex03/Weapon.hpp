#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string name); // parametrized contructor
       ~Weapon();
        const std::string &getType() const;
        void  setType(std::string type);
};
#endif