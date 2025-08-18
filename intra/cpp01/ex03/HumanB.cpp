#include "HumanB.hpp"

HumanB::HumanB(std::string nameH): name(nameH), type(NULL)
{

}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
    if (type)
        std::cout << name << " attacks with their " << (*type).getType() << std::endl;
    else
        std::cout << "has no weapen\n";
}

void HumanB::setWeapon(Weapon& weap)
{
    type = &weap;
}
