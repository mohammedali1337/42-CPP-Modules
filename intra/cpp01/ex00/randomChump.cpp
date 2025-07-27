#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie randomzob(name);
    randomzob.announce();
}