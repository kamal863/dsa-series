#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cout << "enter the row" << endl;
    cin >> m;
  cout << "enter the column" << endl;
    cin >> n;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
 cout << endl;
    }
   
    return 0;
}