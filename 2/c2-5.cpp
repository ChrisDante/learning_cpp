#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
    //square
    string which;
    cout << "which one do you want? square, triangle or rectangular?" << endl;
    cin >> which;
    switch (which)//wrong way because switch don't support string'
    {
        case "square":
        {
            cout << "square" << endl;
            break;
        }
        case "triangle":
        {
            cout << "triangle" << endl;
            break;
        }
        case "rectangular":
        {
            cout << "rectangular" << endl;
            break;
        }
        default:
        {
            cout << "something wrong" << endl;
            break;
        }
    }
    return 0;
}