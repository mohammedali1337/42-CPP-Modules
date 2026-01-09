#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce( void );
};
// newZombie creates a new Zombie on the heap
Zombie* newZombie( std::string name );
// randomChump creates a new Zombie on the stack and announces it
void randomChump( std::string name );

#endif