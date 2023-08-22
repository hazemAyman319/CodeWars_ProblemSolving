#include <iostream>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        int a[n] , b[101]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            b[a[i]]++;
        }
        int maxx=-1;
        for(int i=0;i<101;i++)
        {
            maxx=max(b[i] , maxx);
        }
        cout<<maxx<<endl;
    }
}
