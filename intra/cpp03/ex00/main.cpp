#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap ob("bo3bo3");

    ob.attack("ssss");
    ob.takeDamage(5);
    ob.beRepaired(10);
    ob.takeDamage(5);
    ob.takeDamage(5);
    ob.takeDamage(5);
    ob.takeDamage(5);

    return 0;
}