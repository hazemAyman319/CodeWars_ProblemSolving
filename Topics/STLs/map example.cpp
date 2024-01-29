#include <iostream>
#include <bits\stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //grade by name system
    map<string , int>GradeByName;
    GradeByName.insert({"Hazem" , 77});
    GradeByName.insert({"Mazen" , 59});
    GradeByName.insert({"Mayada" , 66});
    GradeByName.insert({"Hana" , 74});
    string name; cin>>name;
    int counter=0;
    for(auto it = GradeByName.begin();it!=GradeByName.end();it++)
    {
        if(name == it->first)
        {
            counter++;
            cout<<"Grade of "<<name<<" is "<<it->second;
        }
    }
    if(counter==0)
    {
        cout<<"Name Not Found";
    }
    //frequency array using map
    map<int,int>freq;
    int s;
    cin>>s;
    for(int i=0;i<s;i++)
    {
        int num; cin>>num;
        freq[num]++; //num is the key
    }
    for(auto m : freq)
    {
        cout<<m.first<<" => "<<m.second<<endl;
    }
    return 0;
}
