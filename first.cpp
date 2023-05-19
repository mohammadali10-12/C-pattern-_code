#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter number ";
    cin >> a;
    if (a < 0)
    {
        cout << "number is nagative";
    }
    else if (a > 0)
    {
        cout << "number is posative";
    }
    else
    {
        cout << "number is 0";
    }
    return 0;
}