#include <iostream>

// int globalVar = 10; // Global scope

// void test() {
//     int localVar = 5; // Local scope
//     std::cout << "localVar: " << localVar << std::endl;
// }

// int main() {
//     int mainVar = 20; // Local scope داخل main
//     {
//         int mainVar = 10;
//         std::cout << "mainVar: " << mainVar << std::endl;
//     }
//     std::cout << "globalVar: " << globalVar << std::endl;
//     std::cout << "mainVar: " << mainVar << std::endl;
//     test();
//     // std::cout << localVar; // ❌ ما يمكنش نستعملها هنا
// }




//The connection between scope and namespace 
namespace MySpace {
    int x = 42;
}

int main() {
    // std::cout << x; ❌ ما يمكنش بدون تحديد النطاق
    std::cout << MySpace::x; // ✅
}
