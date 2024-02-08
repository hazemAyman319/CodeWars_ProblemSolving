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
    int cases; cin>>cases;
    while(cases--)
    {
        int no_cand , quer;
        cin>>no_cand>>quer;
        int arr[no_cand+1]={0};
        for(int i=1;i<=no_cand;i++)
        {
            cin>>arr[i];
        }
        sort(arr+1 , arr+no_cand+1 , greater<int>());
        for(int i=1;i<=no_cand;i++)
        {
            arr[i]=arr[i-1]+arr[i];
        }
        while(quer--)
        {
            int num , counter=0;cin>>num;
            if(arr[no_cand] < num)
            {
                cout<<-1<<endl;
                continue;
            }
            else
            {
                int low = 1 , high = no_cand;
                int index = -1;
                while(low <= high)
                {
                    int mid = low + (high - low)/2;
                    if(arr[mid] >= num)
                    {
                        index = mid;
                        high = mid - 1;
                    }
                    else
                    {
                        low = mid + 1;
                    }
                }
                cout<<index<<endl;
            }
        }
    }
    return 0;
}
