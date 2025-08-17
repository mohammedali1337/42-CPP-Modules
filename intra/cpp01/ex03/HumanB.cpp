#include "HumanB.hpp"

HumanB::HumanB(std::string nameH): name(nameH), type(NULL), flag_weap(0)
{

}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
    if (getFlag())
        std::cout << name << " attacks with their " << (*type).getType() << std::endl;
    else
        std::cout << "has no weapen\n";
}

void HumanB::setWeapon(Weapon& weap)
{
    type = &weap;
    setFlag(1);
}

void HumanB::setFlag(int Flag)
{
    this->flag_weap = Flag;
}

int  HumanB::getFlag() const
{
    return (flag_weap);
}