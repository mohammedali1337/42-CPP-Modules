#include <iostream>

using namespace std;

class A
{
    public:
        A(){cout<< "constructor for a !!!!!!!\n";}
};

class B: virtual public A
{
    public:
        B(){cout<< "constructor for b !!!!!!!\n";}
};

class C: virtual public A
{
    public:
        C(){cout<< "constructor for c !!!!!!!\n";}
};

class D: public C, public B
{
    public:
        D(){cout<< "constructor for D !!!!!!!\n";}
};


int main(void)
{
    D ob;
    return 0;
}