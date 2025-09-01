#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("default")
{
    HitPoints = 100;
    EnergyPoint = 50;
    Attack_damage = 20;
    std::cout << "ScavTrap default constructor called " << std::endl;
}

ScavTrap::ScavTrap(std::string na): ClapTrap(na)
{
    HitPoints = 100;
    EnergyPoint = 50;
    Attack_damage = 20;
    std::cout << "ScavTrap constructor called for " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ob): ClapTrap(ob)
{
    std::cout << "ScavTrap cpy constructor called " << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& ob)
{
    ClapTrap::operator=(ob);
    std::cout << "ScavTrap cpy assignment operator called" << std::endl;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->EnergyPoint > 0 && HitPoints > 0)
    {
        this->EnergyPoint--;
        std::cout << "ScavTrap " << this->name << " attacks " << target
                  << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << name << " has no energy or hit points" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in gate keeper mod!" << std::endl;
}