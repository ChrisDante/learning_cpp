// c1-2.cpp: In function ‘int main()’:
// c1-2.cpp:8:43: error: invalid operands of types ‘const char [6]’ and ‘const char [8]’ to binary ‘operator+’
//      const std::string message = "Hello" + ", world" + exclam;

#include <iostream>
#include <string>

int main()
{
    
    const std::string exclam = "!";
    const std::string message = "Hello" + ", world" + exclam;

}