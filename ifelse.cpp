#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter the value" << endl;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "this is lowercase" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "this is uppercase" << endl;
    }
    else
    {
        cout << "this is digit" << endl;
    }
}