#include "exemple_orthodox_cononical_form.hpp"

int main()
{
    MyString a;
    MyString b(a);
    MyString c;

    c.operator=(b);
}