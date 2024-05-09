#include "Contact.hpp"

Contact::Contact()
{
    return;
}

Contact::~Contact()
{
    return;
}

void Contact::setFname(std::string str)
{
    this->_firstName = str;
    return;
}

void Contact::setLname(std::string str)
{
    this->_lastName = str;
    return;
}

void Contact::setNickname(std::string str)
{
    this->_nickname = str;
    return;
}

void Contact::setPhone(std::string str)
{
    this->_phoneNumber = str;
    return;
}

void Contact::setSecret(std::string str)
{
    this->_darkestSecret = str;
    return;
}

std::string Contact::getFname()
{
    return (this->_firstName);
}

std::string Contact::getLname()
{
    return (this->_lastName);
}

std::string Contact::getNickname()
{
    return(this->_nickname);
}

std::string Contact::getPhone()
{
    return(this->_phoneNumber);
}

std::string Contact::getSecret()
{
    return(this->_darkestSecret);
}