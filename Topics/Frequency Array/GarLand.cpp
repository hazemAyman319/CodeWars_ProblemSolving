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
    string s1 , s2;
    int res=0 , counter=0, freq_s1[26]={0} , freq_s2[26]={0};
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
        freq_s1[s1[i]-'a']++;
    }
    for(int i=0;i<s2.size();i++)
    {
        freq_s2[s2[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(freq_s2[i] > 0 && freq_s1[i] == 0)
        {
            cout << "-1" << endl;
            return 0;
        }
        res+= min(freq_s1[i], freq_s2[i]);
    }
    cout << res << endl;
}


/*
for(int i=0;i<26;i++)
    {
        if(min(freq_s1[i] , freq_s2[i])==0 && freq_s1[i] != freq_s2[i]) //one of them is a zero and the other is a number
        {
            continue;
        }
        else
        {
            if(min(freq_s1[i] , freq_s2[i])!=0) //both are not zero
            {
                counter++;
            }
            res+=min(freq_s1[i] , freq_s2[i]);
        }
    }
    if(res==0 || counter==1)
    {
        cout<<-1;
    }
    if(counter != 1 && res != 0)
    {
        cout<<res;
    }
*/
