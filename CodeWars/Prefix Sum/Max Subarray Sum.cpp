#include <iostream>
#include <bits\stdc++.h>
using namespace std;
#define ll long long
/*  for(int i=1;i<=size;i++)
    {
        cout<<arr[i]<<" ";
    }*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int size; cin>>size;
    long long arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    long long maxSub = arr[0];
    long long curSum = 0;
    for(int i=0;i<size;i++)
    {
        if(curSum < 0)
        {
            curSum = 0;
        }
        curSum += arr[i];
        maxSub = max(maxSub , curSum);
    }
    cout<<maxSub;
    return 0;
}
