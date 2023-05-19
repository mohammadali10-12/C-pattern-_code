#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "enter the number :";
    cin >> n;

    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 2; i <= n; ++i)
    {
        int sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
}