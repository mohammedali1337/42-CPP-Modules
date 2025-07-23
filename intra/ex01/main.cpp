#include "PhoneBook.hpp"

int main(void)
{
    std::string input;
    PhoneBook ph;
    while (true)
    {
        if (!std::getline(std::cin, input))
            return 1;
        if (input == "ADD")
            ph.addContact();
        else if (input == "SEARCH")
            ph.searchContact();
        else if (input == "EXIT")
            break;
    }
    return 0;
}
