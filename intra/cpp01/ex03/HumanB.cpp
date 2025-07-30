#include "HumanB.hpp"

HumanB::HumanB(std::string nameH): name(nameH), type(NULL)
{

}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << (*type).getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weap)
{
    type = &weap;
}