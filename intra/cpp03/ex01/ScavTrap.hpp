#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
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