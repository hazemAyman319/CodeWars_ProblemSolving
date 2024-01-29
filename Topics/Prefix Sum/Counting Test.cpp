#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;cin>>t;
while(t--)
{
  int n,q,idx=1;cin>>n>>q;
  string s;cin>>s;
  map<char,int>mp;
  vector<map<char,int>>v(n+1);
  for(auto i:s)
  {
      mp[i]++;
      for(auto j:mp)
        v[idx][j.first]=j.second;
     ++idx;

  }
  while(q--)
  {
      ll l,r,resl,resr,mdl,mdr;cin>>l>>r;
      char c;cin>>c;
      resl=l/n,resr=r/n;
      mdl=l%n,mdr=r%n;
      //--mdl;
      ll ans;
      if(mdl==0){
            mdl=n-1,resl--;
        ans=(v[n][c]*resr+v[mdr][c])-(v[n][c]*resl+v[mdl][c]);
      }else ans=(v[n][c]*resr+v[mdr][c])-(v[n][c]*resl+v[mdl-1][c]);
     cout<<ans<<el;
  }
}
    return 0;
}


/*
int cases;cin>>cases;
    while(cases--)
    {
        long long size,quer;
        scanf("%ld%ld",&size,&quer);
        char str[size]; scanf("%s",str);
        while(quer--)
        {
            long long from , to;
            char c;
            scanf("%ld%ld%c",&from,&to,&c);
            int from_q=from-1 , to_q=to-1;
            int index , counter=0;
            for(long long i=from_q;i<=to_q;i++)
            {
                index = (i%size);
                if(str[index]==c)
                {
                    counter++;
                }
            }
            printf("%d\n",&counter);
        }
    }
*/
