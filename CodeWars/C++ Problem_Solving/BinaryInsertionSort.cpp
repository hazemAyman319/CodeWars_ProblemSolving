#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int binarySearch(int a[] , int item , int low , int high)
{
    if(high<=low)
    {
        return(item > a[low]) ? low+1 : low;
    }
    int mid = (low + high)/2;

    if(item == a[mid])
        return mid + 1;
    if(item > a[mid])
        return binarySearch(a , item , mid+1 , high);
    return binarySearch(a , item , low , mid-1);
}
void binaryinsertionSort(int a[] , int n)
{
    int i , loc , j , selected;
    for(i=1;i<n;i++)
    {
        j=i-1;
        selected=a[i];
        loc = binarySearch(a , selected , 0 , j);
        while(j>= loc)
        {
            a[j + 1]=a[j];
            j--;
        }
        a[j + 1]=selected;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int size; cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    binaryinsertionSort(arr , size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
