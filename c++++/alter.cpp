#include <bits/stdc++.h>
using namespace std;

void printA(int arr[],int n)
{
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
}
void swapA(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if ((i + 1) < size)
        {
            swap(arr[i] , arr[i + 1]);
        }
    }
}

int main()
{
    int even[6] = {4, 5, 7, 3, 2, 1};
    int odd[5] = {6, 5, 7, 3, 1};
    swapA(even, 6);
    swapA(odd, 5);
    printA(even,6);
    cout<<endl;
    printA(odd,5);
    return 0;
}
