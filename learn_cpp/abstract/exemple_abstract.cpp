#include <iostream>
using namespace std;
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle\n";
    }
};

int main() {
    // Shape s;       Error: Cannot create object of abstract class
    Shape* s = new Circle();  // Pointer to abstract class
    s->draw();                // Output: Drawing Circle
    delete s;
}