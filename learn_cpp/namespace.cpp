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

using namespace simo ;    //when im using simo namespace should printer hello simo 
using namespace ali ;       //when im using simo namespace should printer hello ali 
int in = 10;
int main(void)
{
    int in = 20;
    simo::print_a();
    std::cout << in << std::endl;
    return 0;
}