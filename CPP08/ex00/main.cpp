#include "easyfind.hpp"
#include <list>
#include <vector>

int main(void)
{
    std::vector<int> myVector;
    // checks object size on stack (pointers), not data size on heap
    std::cout << sizeof(myVector) << std::endl;

    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);
    myVector.push_back(5);

    try{
        // 1. success case
        std::vector<int>::iterator it = easyfind(myVector, 3);
        std::cout << "found value: " << *it << std::endl;

        // 2. failure case: must catch exception
        it = easyfind(myVector, 111);
        std::cout << "found value: " << *it << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}