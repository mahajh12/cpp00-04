#include <iostream>
#include "PhoneBook.hpp"

int main()
{
    const std::string EXIT = "EXIT";
    std::string input;
    int num_contact;
    std::string index;
    PhoneBook phonebook;
    num_contact = 0;

    std::cout << "My Awesome PhoneBook" << std::endl;
    std::cout << "" << std::endl;
    while (input != EXIT)
    {
        std::cout << "Menu Options:" << std::endl;
        std::cout << "ADD" << std::endl;
        std::cout << "SEARCH" << std::endl;
        std::cout << "EXIT" << std::endl;
        std::cout << "" << std::endl;
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            phonebook.addContact();
            if (num_contact < 8)
                num_contact++;
        }
        else if (input == "SEARCH")
        {
            std::cout << "" << std::endl;
            phonebook.printContact(num_contact);
        }
        else if (input == EXIT)
            exit(1);
    }
    return (0); 
}