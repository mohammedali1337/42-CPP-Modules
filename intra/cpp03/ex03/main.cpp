#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap dt("Hamza");

    dt.attack("target1");
    dt.whoAmI();
    std::cout <<  dt.HitPoints << std::endl;
    std::cout << dt.EnergyPoint << std::endl;
    std::cout << dt.Attack_damage << std::endl;
    dt.highFivesGuys();
    dt.guardGate();

    return 0;
}
