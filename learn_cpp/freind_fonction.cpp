#include <iostream>

using namespace std;

class Demo 
{
    friend void print_demo(Demo demo);

    int a = 1;
    public:
        int b = 2;

    private:
        int c = 3;

    protected:
        int d = 4;

};

void print_demo(Demo demo)
{
    cout << demo.a << endl;
    cout << demo.b << endl;
    cout << demo.c << endl;
    cout << demo.d << endl;
}

int main(void)
{
    Demo demo;
    print_demo(demo);
}