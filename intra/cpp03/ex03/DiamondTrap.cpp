#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("default_clap_name"),  ScavTrap(), FragTrap(), name("default")
{
    HitPoints = FragTrap::HitPoints;
    EnergyPoint = ScavTrap::EnergyPoint;
    Attack_damage = FragTrap::Attack_damage;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string na) : ClapTrap(na + "_clap_name"), FragTrap(na), ScavTrap(na), name(na)
{
    HitPoints = FragTrap::HitPoints;
    EnergyPoint = ScavTrap::EnergyPoint;
    Attack_damage = FragTrap::Attack_damage;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& ob) : ClapTrap(ob), ScavTrap(ob), FragTrap(ob)
{
    *this = ob;
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& ob)
{
    ClapTrap::operator=(ob);
    this->name = ob.name;
    std::cout << "DiamondTrap copy assignment operator called" << std::endl;
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << name << ", ClapTrap name : " << ClapTrap::name << std::endl;
}