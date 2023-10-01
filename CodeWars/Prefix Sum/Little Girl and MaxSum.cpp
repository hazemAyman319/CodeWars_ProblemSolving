#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int size , query , sum=0;
    cin>>size>>query;
    int size2 = size+10;
    int arr[size] , pos[size2]={0};
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int l,r;
    while(query--)
    {
        cin>>l>>r;
        pos[l]++;
        pos[r+1]--;
    }
    for(int i=1;i<=size2-1;i++)
    {
        pos[i]+=pos[i-1];
    }
    sort(pos , pos+size2);
    sort(arr , arr+size);
    for(int i=size2-1 , j=size-1;i>=0 , j>=0;i--,j--)
    {
        sum+=(pos[i]*arr[j]);
    }
    cout<<sum;
    return 0;
}
