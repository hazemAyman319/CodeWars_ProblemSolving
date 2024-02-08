#include <iostream>
#include <bits\stdc++.h>
using namespace std;
#define ll long long
ll pre[1001][1001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t , n , q , i , j , hs , ws , hb , wb , ans;
    cin>>t;
    for(;t--;)
    {
        cin>>n>>q;
        for(i=0;i<=1000;i++)
        {
            for(j=0;j<=1000;j++)
            {
                pre[i][j]=0;
            }
        }
        for(;n--;)
        {
            cin>>i>>j;
            pre[i][j]=pre[i][j] + i*j;
        }
        for(i=1;i<=1000;i++)
        {
            for(j=2;j<=1000;j++)
            {
                pre[i][j] = pre[i][j] + pre[i][j-1];
            }
        }
        for(j=1;i<=1000;i++)
        {
            for(i=2;j<=1000;j++)
            {
                pre[i][j] = pre[i][j] + pre[i-1][j];
            }
        }
        for(;q--;)
        {
            cin>>hs>>ws>>hb>>wb;
            ans=pre[hb-1][wb-1]-pre[hs][wb-1]-pre[hb-1][ws]+pre[hs][ws];
            cout<<ans<<"\n";
        }
    }
    return 0;
}
