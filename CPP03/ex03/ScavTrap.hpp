#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string na);
        ScavTrap(const ScavTrap& ob);
        ~ScavTrap();
        ScavTrap& operator= (const ScavTrap& ob);
        void    attack(const std::string& target);
        void guardGate();
};
#endif