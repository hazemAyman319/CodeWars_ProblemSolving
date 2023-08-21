#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int num , flag=0;cin>>num;
    string sent; cin>>sent;
    int alphabet[26]={0};
    for(int i=0;i<sent.size();i++)
    {
        alphabet[tolower(sent[i])-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(alphabet[i] == 0)
        {
            flag=1;
            break;
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
    return 0;
}
