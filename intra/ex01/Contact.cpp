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
     this->nickname = nn;
}
void    Contact::setphoneNumber(std::string ph)
{
    this->phoneNumber = ph;
}
void    Contact::setdarkestSecret(std::string ds)
{
    this->darkestSecret = ds;
}


std::string    Contact::getFirstName() const
{
    return (this->firstName);
}
std::string    Contact::getlastName() const
{
    return (this->lastName);
}
std::string    Contact::getnickname() const
{
    return (this->nickname);
}
std::string    Contact::getphoneNumber() const
{
    return (this->phoneNumber);
}
std::string    Contact::getdarkestSecret() const
{
    return (this->darkestSecret);
}

