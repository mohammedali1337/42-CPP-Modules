#include "Zombie.hpp"

int main(void)
{
    Zombie *zombieob;

    zombieob = newZombie("new zombie");
    zombieob->announce();
    randomChump("random zombie");
    delete zombieob;
    return 0;

}