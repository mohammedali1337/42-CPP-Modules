#include <iostream>

class MathTools {
public:
    static int add(int a, int b) {
        return a + b;
    }

    static int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    std::cout << "Sum: " << MathTools::add(3, 4) << std::endl;       // يعطينا 7
    std::cout << "Product: " << MathTools::multiply(3, 4) << std::endl; // يعطينا 12
    return 0;
}