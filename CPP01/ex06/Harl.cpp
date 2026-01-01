#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
}
void Harl::info()
{
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}
void Harl::warning()
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n\n";

}
void Harl::error()
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n\n";
}


void Harl::complain(char **levl, int c) {

   if (c == 2)
    {
        Harl obj;
        int i;
        std::string levls[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
        void (Harl::*func[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

        i = -1;
        for (int j = 0; j < 4; j++)
        {
            if (levl[1] == levls[j])
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
    }
}
