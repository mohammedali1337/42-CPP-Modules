#include "Zombie.hpp"

void Zombie::set_name(std::string name)
{
    this->name = name;
}

Zombie::Zombie()
{

}

Zombie::~Zombie() {
    std::cout << name << ": is destroyed\n";
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}