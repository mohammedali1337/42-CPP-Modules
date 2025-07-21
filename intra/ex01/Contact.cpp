#include "Contact.hpp"

void    Contact::setFirstName(std::string fn)
{
    this->firstName = fn;
}
void    Contact::setlastName(std::string ln)
{
    this->lastName = ln;
}
void    Contact::setnickname(std::string nn)
{
    this->firstName = nn;
}
void    Contact::setphoneNumber(std::string ph)
{
    this->phoneNumber = ph;
}
void    Contact::setdarkestSecret(std::string ds)
{
    this->darkestSecret = ds;
}


std::string    getFirstName()
{
    return (this->firstName)
}
std::string    getlastName()
{
    return (this->lastName)
}
std::string    getnickname()
{
    return (this->nickname)
}
std::string    getphoneNumber()
{
    return (this->phoneNumber)
}
std::string    getdarkestSecret()
{
    return (this->darkestSecret)
}

