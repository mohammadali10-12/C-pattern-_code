#include <iostream>
using namespace std;

int main()
{
    // for (int i = 0; i <= 15; i += 2)
    // {
    //     cout << i << " ";
    //     if (i & 1)
    //     {
    //         continue;
    //     }
    //     i++;
    // }
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << i << " " << j << endl;
        }
    }
}