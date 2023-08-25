#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num , freq[26]={0} , flag=0;cin>>num;
    string puppies;cin>>puppies;
    for(int i=0;i<puppies.size();i++)
    {
        freq[puppies[i]-'a']++;
    }
    if(puppies.size()==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]>=2)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
}
