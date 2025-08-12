#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
    contact_count = 0;
}

std::string	AddSpaces(int n)
{
	std::string	str;

    if (n == 10)
        return (str);
	while (n < 10)
    {
		str.append(" ");
        n++;
    }
	return (str);
}

std::string changeWidth(std::string str)
{
    if (str.size() > 10)
	{
		str.resize(10);
		str[str.size() - 1] = '.';
	}
	return (str);
}

bool isPrintableString(const std::string& str) {
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
            return false;
    }
    return true;
}

int    PhoneBook::searchContact()
{
    int i = 0;
    std::string index;
    std::string input;
    if (contact_count == 0)
    {
        std::cout << "no contact saved !\n";
        return 0;
    }
    std::cout << "|-------------------------------------------|\n";
    std::cout << "|     Index|First Name| Last Name| Nickname |\n";
    std::cout << "|-------------------------------------------|\n";
    while (i < 8)
    {
        if (cntct[i].getFirstName().size())
        {
            index = i + 1 + 48;
            std::cout << "|" << AddSpaces(index.size()) << changeWidth(index) ;
            std::cout << "|" << AddSpaces(cntct[i].getFirstName().size()) << changeWidth(cntct[i].getFirstName()) ;
            std::cout << "|" << AddSpaces(cntct[i].getlastName().size()) << changeWidth(cntct[i].getlastName()) ;
            std::cout << "|" << AddSpaces(cntct[i].getnickname().size()) << changeWidth(cntct[i].getnickname()) ;
            std::cout << "|" << std::endl;
        }
        i++;
    }
    std::cout << " -------------------------------------------\n";
    while (true)
    {
        std::cout << "select an index: ";
        if (!std::getline(std::cin, input))
            return 1;
        if (!input.empty() && isPrintableString(input))
        break;
    }
    if (input.size() == 1 && input[0] >= '1' && input[0] <= '8' && cntct[input[0] - 1 - '0'].getFirstName().size())
    {
        int idx = input[0] - '0' - 1;
        std::cout << "First Name: " << cntct[idx].getFirstName() << std::endl;
        std::cout << "Last Name: " << cntct[idx].getlastName() << std::endl;
        std::cout << "Nickname: " << cntct[idx].getnickname() << std::endl;
        std::cout << "Phone Number: " << cntct[idx].getphoneNumber() << std::endl;
        std::cout << "Darkest Secret: " << cntct[idx].getdarkestSecret() << std::endl;
    }
    else
        std::cout << "Invalid index!" << std::endl;
    return 0;
}

int    MyGet(std::string msj, std::string &str)
{
    while (true)
    {
        std::cout << msj;
        if (!std::getline(std::cin, str))
            return 1;
        if (!str.empty() && isPrintableString(str))
            break;
        std::cout << "Invalid input! \n";
    }
    return 0;
}
int PhoneBook::addContact()
{
    std::string str;

    if (index > 7)
        std::cout << "Warning: overwriting info about " << cntct[index % 8].getFirstName() << std::endl;

    if (MyGet("Enter first name: ", str))
        return 1;
    cntct[index % 8].setFirstName(str);

    if (MyGet("Enter last name: ", str))
        return 1;
    cntct[index % 8].setlastName(str);

    if (MyGet("Enter nickname: ", str))
        return 1;
    cntct[index % 8].setnickname(str);

    if (MyGet("Enter phone number: ", str))
        return 1;
    cntct[index % 8].setphoneNumber(str);

    if (MyGet("Enter darkest secret: ", str))
        return 1;
    cntct[index % 8].setdarkestSecret(str);

    std::cout << "Contact added successfully!" << std::endl;
    index++; 
    if (contact_count < 8)
        contact_count++;
    return 0;
}
