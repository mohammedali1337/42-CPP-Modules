#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon* type;
        int     flag_weap;
    public:
        HumanB(std::string nameH);
        ~HumanB();
        void attack();
        void setWeapon(Weapon& weap);
        void setFlag(int Flag);
        int getFlag() const;
};
#endif