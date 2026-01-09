#include "Zombie.hpp"

int main(void)
{
    Zombie *zombieH;

    zombieH = zombieHorde(5, "Unknown");
    for (int i = 0; i < 5; i++)
        zombieH[i].announce();
    delete[] zombieH; // delete[] for array allocated on heap
    return 0;
}