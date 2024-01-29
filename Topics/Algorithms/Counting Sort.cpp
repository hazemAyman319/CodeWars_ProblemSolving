#include <iostream>
#include <bits\stdc++.h>
using namespace std;
void CountingSort(int array[] , int n)
{
    int b[n];
    int max = array[0];
    for(int i=1;i<n;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    int count[max+1]={0};
    for(int i=0;i<n;i++)
    {
        count[array[i]]++; //for frequency array
    }
    for(int i=1;i<=max;i++)
    {
        count[i]=count[i]+count[i-1]; //for Perfix sum
    }
    for(int i=n-1;i>=0;i--)
    {
        b[--count[array[i]]]=array[i];
    }
    for(int i=0;i<n;i++)
    {
        array[i]=b[i];
    }
}
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    CountingSort(array , n);
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
