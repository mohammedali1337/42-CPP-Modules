#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl
{
    public:
        void debug();
        void info();
        void warning();
        void error();
        void complain(char **levl, int c);
};


#endif