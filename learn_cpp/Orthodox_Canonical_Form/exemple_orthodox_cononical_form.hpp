// Default constructor
// • Copy constructor
// • Copy assignment operator
// • Destructor





//exemple 



#include <iostream>
#include <cstring>

class MyString {
private:
    char* data;
public:
    // Default Constructor
    MyString() : data(nullptr) {}

    // Copy Constructor
    MyString(const MyString &other) {
        if (other.data) {
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
        } else {
            data = nullptr;
        }
    }

    // Copy Assignment Operator
    MyString& operator=(const MyString &other) {
        if (this != &other) { // check self-assignment
            delete[] data; // free old data
            if (other.data) {
                data = new char[strlen(other.data) + 1];
                strcpy(data, other.data);
            } else {
                data = nullptr;
            }
        }
        return *this;
    }

    // Destructor
    ~MyString() {
        delete[] data;
    }
};
