#include <iostream>
#include <fstream>


std::string replaceString(const std::string& text, const std::string& s1, const std::string& s2) {
    if (s1.empty()) return text; // return the original text if s1 is empty

    std::string result;
    size_t start = 0;
    size_t end = 0;

    while ((end = text.find(s1, start)) != std::string::npos) {
        result.append(text, start, end - start);
        result.append(s2);
        start = end + s1.length();
    }

    result.append(text, start);
    return result;
}

int main(int ac, char** av)
{
    std::string s1;
    std::string s2;
    std::string fileName;
    std::string newF;
    std::fstream myFile;
    std::string text;
    std::ofstream newFile;

    if (ac != 4)
    {
        std::cout << "error ./replace [filename] [string] [string]." << std::endl;
        return (1);
    }
    fileName = av[1];
    s1 = av[2];
    s2 = av[3];
    newF = std::string(av[1]) + ".replace";
    myFile.open(fileName);
    newFile.open(newF);
    if (!myFile)
    {
        std::cout <<  "no file" << std::endl;
        return (1);
    }
    while (std::getline(myFile, text))
    {
        // myFile >> text;
        // if (text.find(s1) != std::string::npos)
        //     text = s2;
        
        // newFile << text << "\n";
        newFile << replaceString(text, s1, s2) << "\n";
    }
    newFile.close();
    myFile.close();
}