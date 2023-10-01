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
    int cases , flag=0; cin>>cases;
    while(cases--)
    {
        int size , sum=0; cin>>size;
        int arr[size] , prefix_sum[size];
        vector<int>vec;
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<size;i++)
        {
            sum+=arr[i];
            prefix_sum[i]=sum;
        }
        flag=0;
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                int check = prefix_sum[j]-prefix_sum[i];
                if(check > prefix_sum[size-1])
                {
                    flag=1;
                }
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
    }
}


/*
#include <bits/stdc++.h>

using namespace std;

void Mon_on_da_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
}


#define ll long long
#define   endl         "\n"
#define   lpi(n)       for(int i=0 ; i<(n) ; i++)
#define   lpj(n)       for(int j=0 ; j<(n) ; j++)
#define   all(v)      ((v).begin()),((v).end())
#define   allr(v)      ((v).rbegin()),((v).rend())
#define   pb           push_back
#define F first
#define S second
#define sz(x) int((x).size())
#define ui unsigned int
typedef vector<int> vi;
typedef vector<ll> vll;



void flow() {


    ll n; cin >> n;

    ll arr[n + 1];
    arr[0] = 0;
    for(int i = 1; i <= n; ++i) {

        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    bool k = 1;
    for(int i = n - 1; i >= 1; --i) {
        if(arr[i] <= 0 || arr[i] >= arr[n]) {
            k = 0;
            break;
        }
    }

    cout << (k? "YES": "NO") << "\n";

}

int main() {
    Mon_on_da_code();
    int tt = 1;
    cin >> tt;
    while (tt--) {
        flow();
    }
    return 0;
}
*/
