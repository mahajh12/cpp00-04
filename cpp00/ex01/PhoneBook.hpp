#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int currentPos;
    public:
        PhoneBook();
        ~PhoneBook();
        void addContact();
        void searchContact();
        void printContact(int num_contacts);
        std::string getValidInput(const std::string& prompt);
};

void infoTable(int num_contacts, Contact contacts[]);

#endif