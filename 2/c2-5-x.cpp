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
    cout << which << endl;
    if (which == "square"){
        cout<<"square";
    }
    else{
        if(which == "triangle"){
            cout<<"square";
        }else{
            if(which == "rectangular"){
                cout<<"square";
            }else{
                cout<<"fuck";
            }
        }
    }
    cout<<endl;
    return 0;
}