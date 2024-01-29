#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

#define forn() for(int i = 0; i < n; i++)
#define ll long long
#define fr first
#define se second
void solve()
{
}

int main(){
    fast;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    int N[n] = {}, p[n] = {};
    forn()
    {
        int x;
        cin >> x;
        if (x >= 0)
            p[i]++;
        if (x <= 0)
            N[i]++;
    }
    for(auto i = 0; i < n; i++){
       if(i){
        p[i] += p[i - 1];
        N[i] += N[i - 1];}
        }
    int mn = 2e5;
    for(int i = 0; i < n - 1; i++)
    {
        int f = p[i] + N[n - 1] - N[i];
        mn = min(mn, f);
    }
    cout << mn << "\n";
    return 0;
}
