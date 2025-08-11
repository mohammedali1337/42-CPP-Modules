#include <iostream>

namespace ali
{
    void print_a()
    {
        std::cout << "hello ali \n";
    }
} ;

namespace simo
{
    void print_a()
    {
        std::cout << "hello simo \n";
    }
} ;

// using namespace simo ;    when im using simo namespace should printer hello simo 
using namespace ali ;       //when im using simo namespace should printer hello ali 

int main(void)
{
    print_a();
    return 0;
}