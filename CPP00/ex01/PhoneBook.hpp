#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <ctype.h>
#include <iostream>
#include "Contact.hpp"

class   PhoneBook 
{
    private:
        Contact contacts[8];
        int CurrentIndex;
        int TotalContacts;
    public:
        PhoneBook();
        void    ADD();
        void    SEARCH();
};

#endif