#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0, i = 1;
    cout << "enter the value nth number" << endl;
    cin >> n;
    while (i <= n)
    {
        if (n % 2 == 0)
        {
            sum = sum + i;
        }
        i + 1;
    }
    cout << "sum of your nth even number" << sum << endl;
    return 0;
}