#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "give n" << endl;
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n >> 1;
        i++;
    }
    cout << ans;
    return 0;
}