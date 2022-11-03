#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the value nth number" << endl;
    cin >> n;
     int sum = 0;
    int i = 1;
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