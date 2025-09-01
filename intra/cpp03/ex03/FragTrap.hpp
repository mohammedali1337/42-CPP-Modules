#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap();
        FragTrap(std::string na);
        FragTrap(const FragTrap& ob);
        ~FragTrap();
        FragTrap& operator= (const FragTrap& ob);
        void    attack(const std::string& target);
        void highFivesGuys(void);
};

#endif