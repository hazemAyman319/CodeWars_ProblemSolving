#include <iostream>
#include <bits\stdc++.h>
using namespace std;
#define ll long long
int q , n;
string command;
bool isReversed;
vector<int>v;
deque<int>dq;
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
            if(dq.empty())
            {
                cout<<" No Job For Ada! "<<endl;
            }
            else
            {
                if(isReversed)
                {
                    cout<<dq.front()<<endl;
                    dq.pop_front();
                }
                else
                {
                    cout<<dq.back()<<endl;
                    dq.pop_back();//O(1)
                }
            }
        }
        else if(command == "front")
        {
            if(dq.empty())
            {
                cout<<" No Job For Ada! "<<endl;
            }
            else
            {
                if(isReversed)
                {
                    cout<<dq.back()<<endl;
                    dq.pop_back();
                }
                else
                {
                    cout<<dq.front()<<endl;
                    dq.pop_front();//O(1)
                }
            }
        }
        else if(command == "reverse")
        {
            isReversed = !isReversed;
        }
        else if(command == "push_back")
        {
            cin>>n;
            if(isReversed)
            {
                dq.push_front(n);
            }
            else
            {
                dq.push_back(n);
            }
        }
        else
        {
            cin>>n;
            if(isReversed)
            {
                dq.push_back(n);
            }
            else
            {
                dq.push_front(n);
            }
        }
    }
    return 0;
}
