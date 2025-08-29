#include "FragTrap.hpp"


FragTrap::FragTrap():ClapTrap("default")
{
    HitPoints = 100;
    EnergyPoint = 100;
    Attack_damage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string na):ClapTrap(na)
{
    HitPoints = 100;
    EnergyPoint = 100;
    Attack_damage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ob): ClapTrap(ob)
{
    std::cout << "FragTrap cpy constructor called " << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

