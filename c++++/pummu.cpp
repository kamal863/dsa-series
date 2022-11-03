#include <iostream>
using namespace std;
int main()
{

    int n, i = 2;
    cout << "enter the number" << endl;
    cin >> n;
    bool isprime = 1;
    while (i < n)
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
        i = i + 1;
    }
    if (isprime == 0)
    {
        cout << " not prime number" << endl;
    }
    else
    {
        cout << "is a prime number" << endl;
    }
    return 0;
}