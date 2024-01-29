#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    int num;cin>>num;
    map<string , int>names;
    while(num--)
    {
        string name;
        cin>>name;
        if(names[name]==0)
        {
            cout<<"OK"<<endl;
        }
        if(names[name]>0)
        {
            cout<<name<<names[name]<<endl;
        }
        names[name]++;
    }
}
