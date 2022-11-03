#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    cout << "enter the binary number" << endl;
    int n;
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        ans = (digit * pow(2, i) + ans);
        n = n / 10;
        i++;
    }

    cout << ans;
    return 0;
}