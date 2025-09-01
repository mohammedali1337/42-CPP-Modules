#include "FragTrap.hpp"

int main()
{
    FragTrap frag("holafrag");
    frag.attack("bo3bo3");
    frag.beRepaired(3);
    frag.takeDamage(5);
    frag.highFivesGuys();
    return 0;
}