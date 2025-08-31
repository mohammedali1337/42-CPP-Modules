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

FragTrap& FragTrap::operator= (const FragTrap& ob)
{
    ClapTrap::operator=(ob);
    std::cout << "FragTrap cpy assignment operator called " << std::endl;
    return *this;
}

void    FragTrap::attack(const std::string& target)
{
    if (this->EnergyPoint > 0 && HitPoints > 0)
    {
        this->EnergyPoint--;
        std::cout << "FragTrap " << this->name << " attacks " << target
                  << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "FragTrap " << name << " has no energy or hit points" << std::endl;
    }
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " requests a high five! " << std::endl;
}