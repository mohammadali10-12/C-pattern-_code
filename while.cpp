#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 2;
    int sum = 0;
    cout << "enter value of i"
         << "  ";
    cin >> n;
    while (i <= n)
    {
        cout << i << "  ";
        sum = sum + i;
        i = i + 2;
    }
    cout << "sum of even number " << sum << endl;
}