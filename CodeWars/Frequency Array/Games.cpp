#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int cases , res=0; cin>>cases;
    int arra1[cases] , arra2[cases] , home[1000]={0} , guest[1000]={0};
    for(int i=1;i<=cases;i++)
    {
        cin>>arra1[i]>>arra2[i];
    }
    for(int i=1;i<=cases;i++)
    {
        home[arra1[i]]++;
        guest[arra2[i]]++;
    }
    for(int i=1;i<=1000;i++)
    {
        if(home[i]==0 || guest[i]==0)
        {
            continue;
        }
        else if(home[i]==1 && guest[i]==1)
        {
            res++;
        }
        else
        {
            res+=home[i]*guest[i];
        }
    }
    cout<<res;
    return 0;
}
