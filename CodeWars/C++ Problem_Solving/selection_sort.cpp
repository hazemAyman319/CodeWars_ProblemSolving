#include <iostream>
#include <bits\stdc++.h>
using namespace std;
void selection_sort(int arr[] , int n)
{
    int minIndx;
    for(int i=0;i<n-1;i++)
    {
        minIndx = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndx])
            {
                minIndx=j;
                swap(arr[i] , arr[minIndx]);
            }
        }
    }
}
int main()
{
    int size;cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr , size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
