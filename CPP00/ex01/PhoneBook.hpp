
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact cntct[8];
        int     contact_count;
        int     index;
    public:
        PhoneBook();
        int    searchContact();
        int    addContact();
};

#endif