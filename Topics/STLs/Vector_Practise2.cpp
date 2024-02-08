#include <iostream>
#include <bits\stdc++.h>
using namespace std;
#define ll long long
int q , n;
string command;
vector<int>v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>q;
    while(q--)
    {
        cin>>command;
        if(command == "back")
        {
            if(v.empty())
            {
                cout<<" No Job For Ada! "<<endl;
            }
            else
            {
                cout<<v.back()<<endl;
                v.pop_back();//O(1)
            }
        }
        else if(command == "front")
        {
            if(v.empty())
            {
                cout<<" No Job For Ada! "<<endl;
            }
            else{
                cout<<v.front()<<endl;
                v.erase(v.begin());//O(N)
            }
        }
        else if(command == "reverse")
        {
            reverse(v.begin(), v.end());//O(N)
        }
        else if(command == "push_back")
        {
            cin>>n;
            v.push_back(n);//O(1)
        }
        else
        {
            cin>>n;
            v.insert(v.begin(), n); //O(N)
        }
    }
    return 0;
}
