#include <iostream>

void memoryAdd(std::string str, std::string* stringPTR, std::string& stringREF)
{
    std::cout << &str << std::endl;
    std::cout << &stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
}

void printValue(std::string str, std::string* stringPTR, std::string& stringREF)
{
    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    memoryAdd(str, stringPTR, stringREF);
    std::cout << std::endl;
    printValue(str, stringPTR, stringREF);
    return (0);
}