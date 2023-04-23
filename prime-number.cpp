#include <iostream>
using namespace std;
int main(void)
{
    int a, i, c, d;
    c = d = 0;
    cout << "Enter any number : ";
    cin >> a;
    c = a / 2;

    for (i = 2; i <= c; i++)
    {
        if (a % i == 0)
        {
            cout << "Not prime";
            d = 1;
            break;
        }
    }

    if (d == 0)
    {
        cout << "is Prime";
    }
    return 0;
}