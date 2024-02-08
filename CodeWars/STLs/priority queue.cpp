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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //priority_queue<int , vector<int>,less<int>>pq;
    //priority_queue<int , vector<int>,greater<int>>pq;
    priority_queue<int>pq;
    pq.push(50);
    pq.push(60);
    pq.push(70);
    pq.push(40);
    pq.emplace(100);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    while(pq.size()!=0)
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}
