#include <iostream>
using namespace std;

int main()
{
    float f;
    cout << "enter fahrenheit ";
    cin >> f;
    int size = sizeof(f);
    cout << "size of f is :" << size << endl;
    float c = (f - 32) * 5 / 9;

    cout << c << endl;
}