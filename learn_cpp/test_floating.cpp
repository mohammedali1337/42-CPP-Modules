#include <iostream>

using namespace std;

int main(void )
{
    int in = 200;
    float fn = 22.75;

    int test;
    float ftest;

    int fractional = 8;


    cout << "fn = " << fn << endl;

    test =  (int) (fn * (1 << fractional));
    cout << "test = " << test << endl;
    ftest = (float ) test / (1 << fractional);
    cout << "ftest = " << ftest << endl;

    return 0;
}