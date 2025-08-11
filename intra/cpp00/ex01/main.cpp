#include "PhoneBook.hpp"

int main(void)
{
    std::string input;
    PhoneBook ph;
    while (true)
    {
        std::cout << "enter command: ";
        if (!std::getline(std::cin, input))
            return 1;
        if (input == "ADD")
        {
            if (ph.addContact())
                return 2;
        }
        else if (input == "SEARCH")
        {
            if (ph.searchContact())
               return 3;
        }
        else if (input == "EXIT")
            break;
    }
    return 0;
}
