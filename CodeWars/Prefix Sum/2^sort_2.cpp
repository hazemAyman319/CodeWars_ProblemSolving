#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define int128  __int128_t
#define get_arr(arr,size) for(int i = 0;i<size;i++)cin>>arr[i];
#define pb push_back
using namespace std;
typedef vector<int> vi;
typedef vector<ll> vll;
void solve() {
   int n,k;cin>>n>>k;
   vi v(n),arr;
   arr.push_back(0);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    int ans = 0;
    for (int i = 0; i < n-1; ++i) {
       if(v[i]<v[i+1]*2)arr.push_back(1);
       else arr.push_back(0);
    }
    for (int i = 1; i < arr.size(); ++i) {
        arr[i]+=arr[i-1];
    }
    for (int i = 1; i+k-1 < n; ++i) {
        if(arr[i+k-1]-arr[i-1]==k)ans++;
    }
    cout<<ans<<"\n";

}
int main() {
      fast;
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int t = 1;
    cin>>t;
    while (t--) {solve();}
    return 0;
}
