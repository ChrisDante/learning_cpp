#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
    cout << "Please enter your name";

    string name;
    cin >> name;

    const string greeting = "Hello, " + name + "!";

    
    cout << "how many space do you want around our greetings?" << endl;
    int pad;
    cin >> pad;

    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;
    const string blank(cols -2,'!');//using 'm' instead ' ' to show it clearly.

    cout << endl; 

    for(int r = 0; r!=rows; r++)
    {
        string::size_type c = 0;
        while (c != cols)
        {
            if(r == pad + 1 && c == pad + 1)
            {
                cout << greeting;
                c += greeting.size();
            }
            else
            {
                if(r == 0|| r == rows -1 || c==0 || c==cols -1){cout << "*";}
                else{
                    if(r != 1 || r != rows - 2){
                        cout << blank;
                        break;
                    }
                    else{cout << " ";}
                    }
                c++;
            }
            
        }
        cout << endl;
    }
    return 0;
}