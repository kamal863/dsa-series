#include <bits\stdc++.h>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return 1;
    }
    return 0;
}
int main()
{
    int arr[5];
    cout << "enter the value of array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the key you want to search" << endl;
    int key;
    cin >> key;
    bool found =search(arr, 5, key);
    if (found)
    {
        cout << "key is found" << endl;
    }
    else
    {
        cout << "key is absent" << endl;
    }
}