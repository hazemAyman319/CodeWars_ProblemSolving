#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //map is key and value in tree structure sorted and accept random access
    map<int,string>m{{1237 , "Hazem"} , {1235 , "Mazen"} , {1236 , "Ziad"}};
    m[1232]="Ayman"; //to enter new element with key and value
    //m.at(1233)="Ashraf"; //random access;
    for(auto mm : m)
    {
        cout<<mm.first<<" "<<mm.second<<endl;
    }
    map<int,string>::iterator it = m.begin();
    cout<<it->first<<" "<<it->second<<endl; //to access what the pointer iterator is pointing at
    for(;it!=m.end();it++)
    {
        cout<<it->first<<" - " <<it->second<<endl;
    }
    map<int,string>::reverse_iterator it2 = m.rbegin();
    for(;it2!=m.rend();it2++)
    {
        cout<<it2->first<<" - " <<it2->second<<endl;
    }
    cout<<m.count(1234)<<endl; //checks if the given key is inside the map true or false
    m.insert({1239,"Ashraf"}); //another way of adding make_pair(1239 , "Ashraf")
    m.emplace(1238 , "Ahmed"); //could be used without curly brackets
    auto it3 = m.begin(); //iterator made to be sent as hint in insert function
    m.emplace_hint(it , 1238 , "Ahmed"); //iterator technique
    it3=m.insert(it3 , {1223 , "Sameh"});
    // if you are inserting various elements with this method then the best practice is to initialize first insertion with the iterator and so on till before last insertion
    m.insert(it3 , {1236 , "Ziad"});
    //to insert a whole map into another one
    map<int , string>m2;
    m2.insert(m.begin() , m.find(1235)); //will insert till this key and 1235 is out of insertion
    m2.erase(1235); //erase with key value;
    it++;
    m.erase(it); //erasing using iterator
    m.erase(it , m.end()); //range of erasing
    m.erase(it , m.find("Ashraf")); //range of erasing
    pair<map<char , int>::iterator , map<char , int>::iterator>it4; //auto it4
    it4=m.equal_range("Hazem") //returns the value of given key and the key right after it
    //but to store the return value it must be an iterator of type pair like the above one in 44
    cout<<it4.first->first<<" "<<it4.first->second;
    cout<<it4.second->first<<" "<<it4.second->second; //the two values of equal range
    return 0;
}
