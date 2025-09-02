#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("defualt"), HitPoints(10), EnergyPoint(10), Attack_damage(0)
{
    std::cout << "ClapTrap default constructor called " << std::endl;
}

ClapTrap::ClapTrap(std::string na): name(na), HitPoints(10), EnergyPoint(10), Attack_damage(0)
{
    std::cout << "ClapTrap " << name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ob): name(ob.name), HitPoints(ob.HitPoints), EnergyPoint(ob.EnergyPoint), Attack_damage(ob.Attack_damage)
{
    std::cout << "ClapTrap " << name << " copied" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destructed" << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& ob)
{
    if (this != &ob)
    {
        this->name = ob.name;
        this->HitPoints = ob.HitPoints;
        this->EnergyPoint = ob.EnergyPoint;
        this->Attack_damage = ob.Attack_damage;
    }
    std::cout << "ClapTrap" << name << " assigned" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->EnergyPoint > 0 && HitPoints > 0)
    {
        this->EnergyPoint--;
        std::cout << "ClapTrap " << this->name << " attacks " << target
                  << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << name << " has no energy or hit points" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " is already destroyed ! " << std::endl;
        return ;
    }
    this->HitPoints -= amount;
    if (this->HitPoints <= 0)
        this->HitPoints = 0;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoint > 0 && HitPoints > 0)
    {
        this->HitPoints += amount;
        this->EnergyPoint--;
        std::cout << "ClapTrap " << name << " is repaired by " << amount << " points of hit points " << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << name << " cannot be repaired, no energy or dead !" << std::endl;
    }
}