#include <iostream>
#include <bits\stdc++.h>
using namespace std;
bool EvenNumber(int i)
{
    return i % 2;
}
int main()
{
    list<int>l={1,3,5};
    list<int>l2(6);
    l.push_back(4);
    l.push_front(7);
    list<int>::iterator li2 = l.begin();
    for(;li2 != l.end(); li2++)
    {
        cout<<*li2<<" ";
    }
    cout<<endl;
    list<int>::reverse_iterator li3 = l.rbegin();
    for(;li3 != l.rend(); li3++)
    {
        cout<<*li3<<" ";
    }
    cout<<endl;
    for(auto li : l)
    {
        cout<<li<<" ";
    }
    cout<<endl;
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    l.remove(5); //unlike pop it removes all frequency of the number 5 from list
    l.erase(l.begin()); //.erase(position) - .erase(start position , end position)
    l.erase(l.begin() , l.end()); //removes within range
    // to remove within range but not from start or the end
    auto it = l.begin();
    it++;
    l.erase(it , l.end()); //removes from the position of the iterator to the end
    l.insert(l.begin(),2); //.insert(position , element , number of times) has the same properties of erase function
    l.assign(10 , 2);// types number 2 in 10 times
    l.size();
    l.empty();//boolean function returns true if the list is empty or false
    l.resize();//.resize(new size) and must be a .clear() after it
    l.merge(l2); //merge two lists inside 1 list like list l and removes the other list and it is sorted
    l.splice(l.begin() , l2);//copies the list into the beginning of the first list
    l.unique();//removes all duplicate elements
    l.remove_if(EvenNumber);//takes a boolean function and removes if the function returns true
    l.sort();
    l.sort(greater<int>());//sort descending
    l.reverse();
    //to access the elements in the list
    list<int>::iterator i=l.begin();
    i++; //move with the iterator to the desired position
    *i = 50; //change its value
}
