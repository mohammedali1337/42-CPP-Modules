#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zobi ;

    zobi = new Zombie[N];
    for (int i = 0; i < N; i++)
        zobi[i].set_name(name);
    return (zobi);
}