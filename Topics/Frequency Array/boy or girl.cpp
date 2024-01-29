#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int freq[26]={0} , counter=0;
    cin>>name;
    for(int i=0;i<name.size();i++)
    {
        freq[name[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]>0)
        {
            counter++;
        }
    }
    if(counter % 2 == 0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    if(counter % 2 != 0)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
}
