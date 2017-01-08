// ➜  1 git:(master) ✗ ./c1-2-2 
// What's your name?ab cd ef gh ig kl mn \n op qr
// ab
// ➜  1 git:(master) ✗ ./c1-2-2
// What's your name?ab\n cd       
// ab\n



#include <iostream>
#include <string>
//left-associative
int main()
{
    std::cout<<"What\'s your name?";

    std::string name;

    std::cin >> name;
    //input a space
    std::cout << name << std::endl;

    return 0;

}

