#include <iostream>

using namespace std;

class book
{
    public:
        int size;
        string name;
    void print_hello()
    {
        cout << "hello world \n";
    }
};

int main(void)
{
    book nn;
    nn.name = "game of thronz";
    nn.size = 233;
    nn.print_hello();

    cout << nn.name << endl << nn.size ;
}
