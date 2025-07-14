#include <iostream>

using namespace std;

class Book
{
    public:
        int prix;
        string  name;

    Book(int p, string n)
    {
        prix = p;
        name = n;
    }
};

int main(void)
{
    Book b(100 , "got");

    cout << b.name << endl << b.prix << endl;

    return 0;
}