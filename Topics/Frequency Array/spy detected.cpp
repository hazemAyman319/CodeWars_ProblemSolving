#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],f[101]= {0};
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            f[a[i]]++;
        }
        for(int i=0; i<n; i++)
            if(f[a[i]]==1)
                cout<<i+1<<endl;
    }
    return 0;
}
