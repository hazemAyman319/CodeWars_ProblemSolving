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
bool check(string s1 , string s2)
{
    if(s1.size() > s2.size())
    {
        return false;
    }
    int ind=0;
    for(int i=0;i<s2.size();i++)
    {
        if(s1[ind] == s2[i])
        {
            ind++;
        }
        if(ind == s1.size())
        {
            return true;
        }
    }
    return false;
}
void solve(){
    string s1, s2, s3;
            cin>>s1>>s2>>s3;
            if(check(s1 , s2))
            {
                map<char , int>m1;
                map<char , int>m2;
                for(int i=0;i<s1.size();i++)
                {
                    m1[s1[i]]++;
                }
                for(int i=0;i<s2.size();i++)
                {
                    m1[s2[i]]++;
                }
                for(int i=0;i<s3.size();i++)
                {
                    m1[s3[i]]++;
                }
                for(auto it : m2)
                {
                    char f = it.first;
                    int s = it.second;

                    if(m1[f] < s)
                    {
                        cout<<"no";
                        return;
                    }
                }
                cout<<"yes"<<endl;
            }
            else
            {
                cout<<"no"<<endl;
            }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int cases;
    cin>>cases;
    while(cases--)
    {
        solve();
    }
    return 0;
}
