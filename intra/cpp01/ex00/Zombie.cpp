#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << this->name << "\"" << this->name << "\"" << "created \n";
}

Zombie::~Zombie()
{
	std::cout << "Zombie \"" << this->name << "\" destroyed" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}