#include <iostream>
#include <string>

using namespace std;

class Ex_p
{
    private:
        void print_arg(string str);
    public:
        void p_to_print(string str);
};

void Ex_p::print_arg(string str)
{
    cout << str << endl;
}

void Ex_p::p_to_print(string str)
{
    void (Ex_p::*p_f)(string) = &Ex_p::print_arg;
    (this->*p_f)(str);
}

int main(int c , char **v )
{

    Ex_p obj;

    obj.p_to_print(v[1]);
    return 0;

}