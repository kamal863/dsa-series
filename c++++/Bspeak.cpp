#include<bits\stdc++.h>
using namespace std;
int BSpeak(int arr[],int low,int high,int n)
{
    int mid=low+(high-low)/2;
    if(arr[mid-1]<arr[mid]>arr[mid+1])
    {
        return mid;
    }
    else if(arr[mid-1]>arr[mid])
    {
        return mid;
        high=mid-1;
    }
    else
    {
     return mid;
     low=mid+1;
    }


}
int main()
{
    int n=6;
int arr[n]={0,1,4,9,8,5};
cout<<BSpeak(arr,0,n-1,n);
}