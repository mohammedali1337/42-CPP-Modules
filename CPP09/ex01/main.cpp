#include "RPN.hpp"

int main(int c, char **v)
{
    if (c != 2)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    RPN mathEx;
    try
    {
        mathEx.run(v[1]); // Execute the RPN calculation with the provided argument
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n'; // if run throws an exception we catch it and print the error message
        return 1;
    }

    return 0;
}