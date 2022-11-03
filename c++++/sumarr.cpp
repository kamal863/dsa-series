#include <bits\stdc++.h>
using namespace std;

int sumar(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    cout << "enter the value of array " << endl;
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    cout << "sum of array" << sumar(arr, 6) << endl;
}
