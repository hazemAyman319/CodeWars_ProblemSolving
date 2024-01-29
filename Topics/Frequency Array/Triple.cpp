#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
void FAST()
{
    ios_base::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);
}
int main()
{
    FAST();
    int cases , nums , res=0;
    cin>>cases;
    while(cases--)
    {
        cin>>nums;
        int arr[nums] , freq[nums+5]={0};
        for(int i=1;i<=nums;i++)
        {
            cin>>arr[i];
            freq[arr[i]]++;
        }
        for(int i=1;i<=nums;i++)
        {
            if(freq[i] >= 3)
            {
                res = i;
            }
        }
        if(res==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<res<<endl;
        }
        res=0;
    }
}
