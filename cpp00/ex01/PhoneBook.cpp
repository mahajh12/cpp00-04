#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    currentPos = 0;
    return;
}

PhoneBook::~PhoneBook()
{
    return;
}

std::string PhoneBook::getValidInput(const std::string& prompt)
{
    std::string input;
    
    std::cout << prompt;
    std::getline(std::cin, input);

    while (input.empty())
    {
        std::cout << "Input cannot be empty. \n" << prompt;
        std::getline(std::cin, input);
    }
    return (input);
}

void PhoneBook::addContact()
{
    if (this->currentPos >= 8)
        this->currentPos = 0;
    std::cout << "Enter contact information: " << std::endl;
    this->contacts[currentPos].setFname(getValidInput("Enter First name: "));
    this->contacts[currentPos].setLname(getValidInput("Enter Last name: "));
    this->contacts[currentPos].setNickname(getValidInput("Enter Nickname: "));
    this->contacts[currentPos].setPhone(getValidInput("Enter Phone number: "));
    this->contacts[currentPos].setSecret(getValidInput("Enter Secret: "));
    currentPos++;
}

void infoTable(int num_contacts, Contact contacts[])
{
    std::cout << "     Index | first name | last name | Nickname" << std::endl;
    for (int i = 0; i < num_contacts; ++i)
    {
        int indexStr = i + 1;
        std::string fname = contacts[i].getFname();
        std::string lname = contacts[i].getLname();
        std::string nickname = contacts[i].getNickname();

        std::cout << std::setw(10) << std::right << indexStr << " | ";
        if (fname.length() > 10) {
            fname = fname.substr(0, 9) + ".";
        }
        std::cout << std::setw(10) << std::right << fname << " | ";
        if (lname.length() > 10) {
            lname = lname.substr(0, 9) + ".";
        }
        std::cout << std::setw(10) << std::right << lname << "| ";
        if (nickname.length() > 10) {
            nickname = nickname.substr(0, 9) + ".";
        }
        std::cout << std::setw(10) << std::right << nickname << " | ";
        std::cout << std::endl;
    }
    return;
}

void PhoneBook::printContact(int num_contacts)
{
    int index;
    std::string input;

    infoTable(num_contacts, this->contacts);
    while(true)
    {
        std::getline(std::cin, input);
        index = std::atoi(input.c_str()) - 1;
        if (index < 0 || index >= num_contacts)
        {
            std::cout << "Wrong input!" << std::endl;
            continue;
        }
        std::string user = this->contacts[index].getFname();
        std::cout << "Name: " << user << std::endl;
        user = this->contacts[index].getLname();
        std::cout << "Last name: " << user << std::endl;
        user = this->contacts[index].getNickname();
        std::cout << "Nickname: " << user << std::endl;
        user = this->contacts[index].getPhone();
        std::cout << "Phone: " << user << std::endl;
        user = this->contacts[index].getSecret();
        std::cout << "Darkest secret: " << user << std::endl;
        break;
    }
    std::cout << "\n" << std::endl;
    return;
}