#include <iostream>

using namespace std;

class Calculator
{
    public:
        void add(int a, int b);
        void substract(int a, int b);
        void multiply(int a, int b);
        void divide(int a, int b);
};

void Calculator::add(int a, int b)
{
    cout << "resautl : " << a + b << endl;
}
void Calculator::substract(int a, int b)
{
    cout << "resautl : " << a - b << endl;
}
void Calculator::multiply(int a, int b)
{
    cout << "resautl : " << a * b << endl;
}
void Calculator::divide(int a, int b)
{
    cout << "resautl : " << a / b << endl;
}


int main(void)
{
    int op, a, b;
    Calculator obj;

    cout << "chose operation : " << endl;
    cout << "0: add\n1: substract\n2: multiply\n3: divide"<< endl << "> ";
    cin >> op;
    cout << "enter a and b: ";
    cin >> a;
    cin >> b;

    void (Calculator::*p_f[])(int, int) = {&Calculator::add, &Calculator::substract, &Calculator::multiply, &Calculator::divide};
    (obj.*p_f[op])(a, b);

}