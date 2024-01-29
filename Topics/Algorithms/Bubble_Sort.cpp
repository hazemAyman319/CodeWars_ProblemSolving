#include <iostream>
#include <bits\stdc++.h>
using namespace std;
void bubble_Sort(int arr[] , int n)
{
    bool flag = true; //to make the swaps stops if the array is already sorted
    int counter = 0;
    for(int i=0;i<n-1;i++) //loop on the passes
    {
        for(int j=0 ; j<n-i-1; j++) //loop on the elements
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
                flag=false;
            }
            counter++; //the counter must be at least 5 if it is already sorted
        }
        if(flag==true) //if in one of the passes the flag did not change to true then no sorting happened
        {
            break;
        }
    }
    cout<<"no of rounds : "<<counter<<endl;
}
void print_Array(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size;cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    bubble_Sort(arr , size);
    print_Array(arr , size);
    return 0;
}
