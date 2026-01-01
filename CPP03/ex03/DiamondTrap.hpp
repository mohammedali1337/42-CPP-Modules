#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string na);
        DiamondTrap(const DiamondTrap& ob);
        ~DiamondTrap();
        DiamondTrap& operator= (const DiamondTrap& ob);
        void    attack(const std::string& target);
        void whoAmI();
};

#endif