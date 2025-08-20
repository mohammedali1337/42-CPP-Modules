#include <iostream>

class Test {
private:
    int x;
public:
    Test(int val) : x(val) {}

    // Copy constructor بدون reference (غلط!)
    Test(Test &other) {
        x = other.x;
        std::cout << "Copy constructor called\n";
    }

    int getX() { return x; }
};

int main() {
    Test a(10);

    // هنا غادي ينادي على copy constructor
    Test b = a;

    std::cout << "b.x = " << b.getX() << std::endl;

    return 0;
}
