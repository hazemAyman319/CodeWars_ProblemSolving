#include <iostream>
#include <bits\stdc++.h>
using namespace std;
#define ll long long
/*
for(int i=1;i<=size;i++)
{
    cout<<arr[i]<<" ";
}

bool prime(long long number)
{
    if(number <= 1)
    {
        return false;
    }
    for(int i=2;i<=sqrt(number);i++)
    {
        if(number % i == 0)
        {
            return false;
        }
    }
    return true;
}
*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    int q; cin >> q;
    while (q--)
    {
        int l, r; cin >> l >> r;
        cout << (a[r] - a[--l]) / 10 << endl;
    }
    return 0;
}
