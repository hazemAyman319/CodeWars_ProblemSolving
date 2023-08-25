#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>v(5);
    int n=0;
    cout<<"Enter vector Element:"<<endl;
    for(auto i=0;i<v.size();i++)
    {
        cin>>v[i];
        if(i==v.size()-1)
        {
            cout<<"if you want to resize the list write the size you want"<<"\n";
            cout<<"else press -1 to break"<<"\n";
            cin>>n;
            if(n==-1)
            {
                break;
            }
            else
            {
                v.resize(n);
            }
        }
    }
    for(auto i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
