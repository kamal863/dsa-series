#include <bits\stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
  for (int i = 0; i < 6; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int arr[6];
    cout << "enter the value u want to reverse" << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, 6);
   // print(arr, 6);
}