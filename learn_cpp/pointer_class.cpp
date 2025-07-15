#include <iostream>

using namespace std;

class Book
{
    public:
        int a = 4;
        int b = 5;
};

void print_p(Book *book)
{
    cout << book->a << endl << book->b << endl;
}

int main(void)
{
    Book book;
    print_p(&book);
    return 0;
}