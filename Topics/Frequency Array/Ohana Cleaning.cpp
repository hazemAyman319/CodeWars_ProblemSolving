#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n,maxi=0;
    cin>>n;
    map<string,int>mp;
    while(n--)
    {
        string s;
        cin>>s;
        mp[s]++;
        maxi=max(maxi,mp[s]);
    }
    cout<<maxi;
}
/*
int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int maxi = 1, cur = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
            cur++;
        else
            cur = 1;
        maxi = max(maxi, cur);
    }
    cout << maxi;
    return 0;
*/
