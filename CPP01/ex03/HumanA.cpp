#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << name << " attacks with their " << type.getType() << std::endl;
}

HumanA::~HumanA()
{

}

HumanA::HumanA(std::string nameH, Weapon& weaponH): name(nameH), type(weaponH)
{
    
}