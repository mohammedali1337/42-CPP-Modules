#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Guardian");
    scav.attack("enemy");
    scav.guardGate();

    return 0;
}