#include <iostream>
#include <bits\stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    set<int>st;
    int num , x; cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>x;
        st.insert(x);
    }
    cout<<st.size();
    return 0;
}
