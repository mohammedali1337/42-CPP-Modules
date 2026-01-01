#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
    }
    std::cout << std::endl << std::endl << std::endl;
    {
        ICharacter* eren = new Character("eren");
        ICharacter* zeke = new Character("zeke");

        eren->use(0, *zeke);
        zeke->use(0, *eren);

        IMateriaSource* mtr1 = new MateriaSource();
        IMateriaSource* mtr2 = new MateriaSource();
        IMateriaSource* mtr3 = new MateriaSource();
        IMateriaSource* mtr4 = new MateriaSource();

        mtr1->learnMateria(new Cure());
        mtr2->learnMateria(new Cure());
        mtr3->learnMateria(new Ice());
        mtr4->learnMateria(new Ice());

        AMateria* m1 = new Cure();
        AMateria* m2 = mtr3->createMateria("ice");

        eren->equip(m1);
        zeke->equip(m2);

        eren->equip(new Cure());
        zeke->equip(new Ice);

        eren->use(0, *zeke);
        eren->use(2, *zeke);
        zeke->use(0, *eren);
        zeke->use(2, *eren);
        eren->use(0, *zeke);
        eren->use(2, *zeke);
        
        eren->unequip(1);
        zeke->unequip(2);

        eren->unequip(2);
        zeke->unequip(1);


        delete eren;
        delete zeke;
        delete mtr1;
        delete mtr2;
        delete mtr3;
        delete mtr4;
    }
    return 0;
}

