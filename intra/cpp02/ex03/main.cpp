#include "Point.hpp"

int main(void )
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);

    Point p1(2, 2);
    Point p2(20, 10);
    Point p3(2, 10);
    Point p4(2000, -1000);

    std::cout << "p1 inside ?" << (bsp(a, b, c, p1) ? "yes" : "no") << std::endl;
    std::cout << "p2 inside ?" << (bsp(a, b, c, p2) ? "yes" : "no") << std::endl;
    std::cout << "p3 inside ?" << (bsp(a, b, c, p3) ? "yes" : "no") << std::endl;
    std::cout << "p2 inside ?" << (bsp(a, b, c, p4) ? "yes" : "no") << std::endl;
}