#include <iostream>
using namespace std;

class MyClass {
    int* data;

public:
    MyClass(int value) { data = new int(value); }

    // Copy Assignment Operator
    MyClass& operator=(const MyClass& other) {
        cout << "Copy Assignment Operator called\n";
        if (this != &other) {
            delete data;
            data = new int(*other.data);
        }
        return *this;
    }

    void show() { cout << *data << endl; }

    ~MyClass() { delete data; }
};

int main() {
    MyClass a(10);
    MyClass b(20);

    b = a;  // ← هنا يتم استدعاء Copy Assignment Operator

    a.show(); // 10
    b.show(); // 10
}
