#include <iostream>
using namespace std;



class test
{
    // private:
    //     int a;
    //     int a2;
    public:
        virtual void print(){cout << "hello world \n";}
};

class test2: public test
{
    public:
        void print()
        {
            cout << "hello from derived class " << endl;
        }
};


int main(void)
{
    test b;
    b.print();
    return 0;
    // cout << sizeof(b) << endl;
}