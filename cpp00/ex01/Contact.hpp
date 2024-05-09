#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstring>

class Contact
{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;

    public:
        Contact();
        ~Contact();
        std::string getFname();
        std::string getLname();
        std::string getNickname();
        std::string getPhone();
        std::string getSecret();
        void setFname(std::string str);
        void setLname(std::string str);
        void setNickname(std::string str);
        void setPhone(std::string str);
        void setSecret(std::string str);
};

#endif