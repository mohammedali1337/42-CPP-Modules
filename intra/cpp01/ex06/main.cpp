#include "Harl.hpp"

int main(int c, char **v)
{
    if (c == 2)
    {
        Harl obj;
        int i;
        std::string levl;
        std::string levls[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
        void (Harl::*func[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
        levl = v[1];
        for (i = 0; i < 4 ; i++)
        {
            if (levl == levls[i])
                break;
        }
        if (i >= 0 && i <= 3)
            (obj.*func[i])();
        else 
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
    else
    {
        std::cout << "Usage: ./harlFilter <LEVEL>\n";
        return 1;
    }
    return 0;
}