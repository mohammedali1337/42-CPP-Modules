#include <iostream>
#include <iomanip>

int main()
{
    std::string word = "ali";
    std::cout << "|" << std::setw(10) << std::setfill('*') << word << std::setfill('*') << std::setw(10) <<"|" << std::endl;
    return 0;
}