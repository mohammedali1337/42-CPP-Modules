#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        int HitPoints;
        int EnergyPoint;
        int Attack_damage;
    public:
        ClapTrap(std::string na);
        ClapTrap(const ClapTrap& ob);
        ~ClapTrap();
        ClapTrap& operator= (const ClapTrap& ob);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif