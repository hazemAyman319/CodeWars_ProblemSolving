#include <iostream>
#include <bits\stdc++.h>
using namespace std;
#define ll long long
/*
for(int i=1;i<=size;i++)
{
    cout<<arr[i]<<" ";
}
*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int size , q; cin>>size;
    int arr[size+1]={0}, brr[size+1]={0};
    for(int i=1;i<=size;i++)
    {
        cin>>arr[i];
        brr[i]=arr[i];
    }
    sort(brr+1, brr+size+1);
    for(int i=1;i<=size;i++)
    {
        arr[i]+=arr[i-1];
        brr[i]+=brr[i-1];
    }
    cin>>q;
    int ch , l , r , res;
    while(q--)
    {
        cin>>ch>>l>>r;
        if(ch == 1)
        {
            res = arr[r] - arr[l-1];
        }
        if(ch == 2)
        {
            res = brr[r] - brr[l-1];
        }
        cout<<res<<endl;
    }
    return 0;
}
