#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    pair<int , string>p(123 , "Hazem"); //make_pair(123 , "Hazem")
    pair<int , string>::iterator it;
    for(it=p.begin();it!=vp.end();i++)
    {
        cout<<it->first<<" "<<it->second;
    }
    for(auto vp : vp)
    {
        cout<<vp.first<<vp.second;
    }
    cin>>p.first>>p.second; //p.first=something p.second=something
    cout<<p.first<<" "<<p.second;
    pair<string , pair<int , double>>Employee;
    Employee.first = "Hazem";
    Employee.second.first = 2003;
    Employee.second.second = 10000;
    vector<pair<int , string>>vp;
    vp.push_back({1234 , "Mazen"}); //make_pair(1234 , "Mazen")
    vp[0].first; vp[0].second;
    return 0;
}
