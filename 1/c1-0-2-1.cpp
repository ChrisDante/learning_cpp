#include <iostream>
#include <string>
//left-associative
int main()
{
    std::cout<<"What\'s your name?";

    std::string name;
    std::string love;    
    std::cin >> name >> love;
    std::cout << name << std::endl;
    std::cout << love << std::endl;
    return 0;

}