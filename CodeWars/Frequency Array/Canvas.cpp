#include <iostream>
using namespace std;
int main()
{
    int nums , counter=0 , res=0; cin>>nums;
    int sticks[nums] , freq[1000]={0};
    for(int i=0;i<nums;i++)
    {
        cin>>sticks[i];
        freq[sticks[i]]++;
    }
    for(int i=0;i<1000;i++)
    {
        if(freq[i]%2!=0)
        {
            freq[i]--;
        }
        counter+=freq[i];
    }
    res=counter/4;
    cout<<res;
    return 0;
}
