#include <iostream>
#include <bits\stdc++.h>
using namespace std;
#define ll long long
queue<int>q;
deque<int>dq;

void push(int x)
{
    q.push(x);
    while(!dq.empty() && dq.back() < x)
    {
        dq.pop_back();
    }
    dq.push_back(x);
}
int pop()
{
    if(dq.front() == q.front())
    {
        dq.pop_front();
    }
    q.pop_back();
}
int front()
{
    return q.front();
}
int getMax()
{
    return dq.front();
}

int t , x;
string command;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>t;
    while(t--)
    {
        cin>>command;
        if(command == "push")
        {
            cin>>x;
            q.push(x);
        }
        else if(command == "pop")
        {
            q.pop();
        }
        else if(command == "front")
        {
            cout<<q.front()<<endl;
        }
        else if(command == "max")
        {
            cout<<getMax()<<endl;
        }
    }
    return 0;
}
