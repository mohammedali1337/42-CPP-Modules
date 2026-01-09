#include "PmergeMe.hpp"

int main(int c, char **v)
{
    if (c < 2)
    {
        std::cout << "Error: No argument provided." << std::endl;
        return 1;
    }

    PmergeMe PmergeMeOb;
    try
    {
        PmergeMeOb.run(c, v); // if an error occurs it will throw an exception
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}