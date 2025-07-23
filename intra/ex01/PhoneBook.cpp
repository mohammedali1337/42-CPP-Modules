#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
    contact_count = 0;
}

std::string	add_spaces(int n)
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

void    PhoneBook::searchContact()
{
    int i = 0;
    std::string index;
    if (contact_count == 0)
    {
        std::cout << "no contact saved !\n";
        return ;
    }
    std::cout << "|-------------------------------------------|\n";
    std::cout << "|     Index|First Name| Last Name| Nickname |\n";
    std::cout << "|-------------------------------------------|\n";
    while (i < 8)
    {
        if (cntct[i].getFirstName().size())
        {
            index = i + 48;
            std::cout << "|" << add_spaces(index.size()) << changeWidth(index) ;
            std::cout << "|" << add_spaces(cntct[i].getFirstName().size()) << changeWidth(cntct[i].getFirstName()) ;
            std::cout << "|" << add_spaces(cntct[i].getlastName().size()) << changeWidth(cntct[i].getlastName()) ;
            std::cout << "|" << add_spaces(cntct[i].getnickname().size()) << changeWidth(cntct[i].getnickname()) ;
            std::cout << "|" << std::endl;
        }
        i++;
    }
    std::cout << "-------------------------------------------\n";
}



void    PhoneBook::addContact()
{
    std::string str;

    if (index > 7)
        std::cout << "Warning: overwriting info about " << cntct[index % 8].getFirstName() << std::endl;
    std::cout << "Enter first name: ";
    std::getline(std::cin, str);
    cntct[index % 8].setFirstName(str);

    std::cout << "Enter last name: ";
    std::getline(std::cin, str);
    cntct[index % 8].setlastName(str);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, str);
    cntct[index % 8].setnickname(str);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, str);
    cntct[index % 8].setphoneNumber(str);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, str);
    cntct[index % 8].setdarkestSecret(str);

    std::cout << "Contact added successfully!" << std::endl;
    index++; 
    if (contact_count < 8)
        contact_count++;
}