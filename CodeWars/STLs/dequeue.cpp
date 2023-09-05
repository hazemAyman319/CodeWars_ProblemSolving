#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    deque<char>d={'H','a','z','e','m'};
    d.push_back('r'); //d.emplace_back()
    d.push_front('f'); //d.emplace_front() more faster
    d.pop_back();
    d.pop_front();
    d.insert(d.begin() , 'M');
    d.erase(d.begin()+1); //removes at a position
    deque<char>::iterator it = d.begin(); //iterator
    auto it2 = d.begin(); //d.rbegin()   d.rend(); another initilaiztion of iterator
    for(size_t i=0;i<d.size();i++)
    {
        cout<<d[i];
    }
    cout<<endl;
    for(;it!=d.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;
}
