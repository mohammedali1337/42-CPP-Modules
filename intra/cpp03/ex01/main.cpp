#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap ob("mohammed");
    
    ob.takeDamage(5);
    ob.takeDamage(5);
    ob.takeDamage(5);
    ob.attack("simo");
    ob.attack("simo");
}