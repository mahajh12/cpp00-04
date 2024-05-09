#include <iostream>
#include <cstring>

int main(int ac, char** av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    int i = 1;
    size_t j;
    char upper;
    while (i < ac)
    {
        j = 0;
        while (j < strlen(av[i]))
        {
            upper = toupper(av[i][j]);
            std::cout << upper;
            j++;
        }
        i++;
    }
    return (0);
}