#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav;
    scav.attack("enemy");
    scav.guardGate();
    scav.takeDamage(100);
    scav.beRepaired(5);
    scav.takeDamage(100);
    return 0;
}