#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria 
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure& ob);
        AMateria* clone() const;

        Cure& operator= (const Cure& ob);

        void use(ICharacter& target);
};

#endif