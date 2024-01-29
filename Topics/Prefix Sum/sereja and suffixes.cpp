#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n , m;
    cin>>n>>m;
    set<int>s;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n;i>0;i--)
    {
        s.insert(arr[i]);
        arr[i]=s.size();
    }
    int p;
    for(int i=1;i<=m;i++)
    {
        cin>>p;
        cout<<arr[p]<<endl;
    }
    return 0;
}
