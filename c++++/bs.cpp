    #include <bits/stdc++.h>
using namespace std;
int binaryS(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
           { end = mid - 1;
           }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[5], key;
    cout << "print 5 number for BS:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the number you want to search" << endl;
    cin >> key;
    int answer = binaryS(arr, 5, key);
    if (answer == -1)
    {
        cout << "not in array";
    }
    else
        cout << "present in array in index" << answer;
}
