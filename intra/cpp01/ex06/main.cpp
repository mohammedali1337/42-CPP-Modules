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
        i = -1;
        for (int j = 0; j < 4; j++)
        {
            if (levl == levls[j])
            {
                i = j;
                break;
            }
        }
        switch (i)
        {
            case 0:
                (obj.*func[0])();
                break;
            case 1:
                (obj.*func[1])();
                break;
            case 2:
                (obj.*func[2])();
                break;
            case 3:
                (obj.*func[3])();
                break;
            default:
                std::cout << "[ Probably complaining about insignificant problems ]\n";
                break;
        }
    }
    else
    {
        std::cout << "Usage: ./harlFilter <LEVEL>\n";
        return 1;
    }
    return 0;
}
