#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int planks , seq , sum=0 , res;
    cin>>planks>>seq;
    int arr[planks] , prefix_sum[planks]={0};
    for(int i=0;i<planks;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<planks;i++)
    {
        sum+=arr[i];
        prefix_sum[i]+=sum;
    }
    for(int i=seq;)
    cout<<res;
    return 0;
}
/*
int n, k; cin >> n >> k;
    int arr[n + 1] = {};
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}

	int min = (int)1e9, ans;
	for (int i = 1; i <= n; i++) {
		int l = i, r = i + k - 1;
		if (r <= n) {
			if (arr[r] - arr[l - 1] <= min) {
				ans = l;
				min = arr[r] - arr[l - 1];
			}
		}
	}
	cout << ans << "\n";
*/
