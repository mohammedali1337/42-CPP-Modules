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

        // Show list and handle index input
        int    searchContact();

        // Add new contact
        int    addContact();
};

#endif