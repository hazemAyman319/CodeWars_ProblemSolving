#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int size , ops , quer;
    cin>>size>>ops>>quer;
    int arr[size+1] , freq[size+1]={0} , res[size+1]={0};
    vector<pair<int , pair<int,int>>>vec(ops+1);
    for(int i=1;i<=size;i++)
    {
        cin>>arr[i];
    }
    int st , en , add;
    for(int i=1;i<=ops;i++)
    {
        cin>>st>>en>>add;
        vec[i] = {st , {en , add}};
    }
    int start , end;
    while(quer--)
    {
        cin>>start>>end;
        for(int i=start;i<=end;i++)
        {
            freq[i]++;
        }
    }
    for(int i=1;i<=size;i++)
    {
        freq[i]=freq[i] * vec[i].second.second;
    }
    for(int i=1;i<=size;i++)
    {
        int start = vec[i].first; int end=vec[i].second.first;
        for(int j=start;j<=end;j++)
        {
            res[i]+=freq[j];
        }
    }
    for(int i=1;i<=size;i++)
    {
        cout<<res[i]+i<<" ";
    }
    return 0;
}

/*
for(int i=1;i<=size;i++)
    {
        cout<<freq[i]<<" ";
    }
/*
int size , ops , quer;
    int arr[size+1] , freq[ops+1]={0};
    cin>>size>>ops>>quer;
    for(int i=1;i<=size;i++)
    {
        cin>>arr[i];
    }
    operations ops_arr[ops+1];
    for(int i=1;i<=ops;i++)
    {
        cin>>ops_arr[i].from>>ops_arr[i].to>>ops_arr[i].adds;
    }
    int from , to; cin>>from>>to;
    for(int i=from;i<=to;i++)
    {
        freq[i]++;
        cin>>from>>to;
    }
    for(int i=from;i<=to;i++)
    {
        cout<<freq[i];
    }
*/



/*
int size , ops , quer;
    cin>>size>>ops>>quer;
    int arr[size+1] , table[ops+1][4];
    for(int i=1;i<=size;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<ops+1;i++)
    {
        for(int j=1;j<4;j++)
        {
            cin>>table[i][j];
        }
    }
    while(quer--)
    {
        int from_q , to_q;
        cin>>from_q>>to_q;
        for(int i=from_q;i<=to_q;i++)
        {
            for(int j=table[i][1];j<=table[i][2];j++)
            {
                arr[j]+=table[i][3];
            }
        }
    }
    for(int i=1;i<=size;i++)
    {
        cout<<arr[i]<<" ";
    }
*/
