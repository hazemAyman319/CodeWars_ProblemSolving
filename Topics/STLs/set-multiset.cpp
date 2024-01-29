#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    //set can't be modified or randomly accessed
    set<int>s{2,1,0,5,5}; //last 5 will not be printed because it is repeated
    s.insert(6);
    s.insert(4); // ->O(lg n)
    for(auto s : s)
    {
        cout<<s<<" ";
    }
    cout<<endl;
    set<string>s1;
    auto it = s1.begin();
    s1.emplace_hint(it , "Ahmed"); //here we hint the compiler to put at the place of iterator directly
    it = s1.emplace_hint(it , "Dina");
    it = s1.emplace_hint(it , "Wael");
    it = s1.emplace_hint(it , "Randa"); //store the next process
    s1.emplace_hint(s1.end() , "Hazem"); // ->insertion here takes O(1) unlike insert
    for(auto s1 : s1)
    {
        cout<<s1<<" ";
    }
    cout<<endl;
    set<string>s2;
    auto it2 = s2.emplace("Hazem");
    // the iterator is having 2 values 1 is the iterator pointing to the value and the other is the 0 if the value is repeated or 1 if the value is newly added
    cout<<it2.second<<endl; //boolean value
    cout<<*it2.first<<endl; //iterator to the value
    it2 = s2.emplace("Hazem");
    cout<<it2.second<<endl;
    set<int>s3 = {10 , 20 , 20 , 30 ,40 , 50 , 60};
    s3.erase(20);
    auto it3 = s3.begin();
    auto it4 = s3.find(40); s3.erase(it4 , s3.end()); //to remove from a specific number till the end
    it3++; //it3++++ increments double
    s3.erase(it3); //another way to erase is to pass the iterator
    auto itup = s3.upper_bound(50);
    auto itlow = s3.lower_bound(10);
    s3.erase(itlow , itup);//to remove from a specific number to a specific number
    for(auto s : s3)
    {
        cout<<s<<" ";
    }
    //key compare
    set<int>s5{10,20,30,40,50,60,70,80};
    auto it = s5.begin();
    auto com = s.key_comp();
    int c=50;
    for(;com(*it , c);it++) //compares with value till reach it and then stop looping
    {
        cout<<*it<<endl;
    } //10 , 20 , 30 ,40
    s5.count(20); //returns 1 or 0 if found or not found in the set
    auto it5 = s5.equal_range(40);
    cout<<*it5.first<<endl;
    cout<<*it5.second<<endl; //equal range prints the value and the value right after it
    set<int , greater<int>>s5; //makes the arrangement in descending order
    multiset<int>s6{10,10,20,30,40,40,50,60}; //accepts repetition of elements
    s6.count(10); //counts number of repetitions with multiset
    return 0;
}
