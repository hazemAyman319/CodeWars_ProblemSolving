#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
bool GreaterThanThree(int i)
{
    return i > 3;
}
int main()
{
    vector<int>v={5,1,2,7,0,3};
    int arr[]={10,20,30,40,50,60,70,80};
    vector<int>vec(10);
    copy(istream_iterator<int>(cin) , istream_iterator<int>() , back_inserter(vec));
    sort(v.begin(),v.end());
    reverse(v.begin() , v.end());
    sort(v.rbegin() , v.rend());
    auto mini = min_element(v.begin() , v.end());
    auto maxi = max_element(v.begin() , v.end());
    auto pair = minmax_element(v.begin() , v.end());
    auto itr = find_if(v.begin() , v.end() ,GreaterThanThree);
    copy(arr , arr+2 , v.begin());
    copy_backward(arr , arr+2 , v.end());
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    for(;itr!=v.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    copy(vec.begin() , vec.end() , ostream_iterator<int>(cout , " "));
    cout<<endl;
    cout<<"minumum : "<<*mini<<endl;
    cout<<"maximum : "<<*maxi<<endl;
    cout<<"minumum : "<<*pair.first<<endl;
    cout<<"maximum : "<<*pair.second<<endl;
}
