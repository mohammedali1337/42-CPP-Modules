#include <iostream>

int main(int c, char **v)
{
    if (c == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else{
        for (int i = 1; i < c; i++)
            for (int j = 0; v[i][j]; j++)
                std::cout << (char)std::toupper(v[i][j]);
        std::cout << "\n";
    }
    return 0;
}