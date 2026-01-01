#include <cctype>
#include <iostream>

int main(int c, char **v)
{
    // Check if args exist, otherwise print noise
    if (c == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else {
        for (int i = 1; i < c; i++)
        {
            for (int j = 0; v[i][j]; j++)
                // toupper returns int, so casting back to char is needed for output
                std::cout << (char)std::toupper(v[i][j]);
        }
        std::cout << std::endl;
    }
    return 0;
}