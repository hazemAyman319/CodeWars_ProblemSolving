#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    forward_list<int>fl = {1,2,3};
    forward_list<int>::iterator it = fl.before_begin(); //when you create an iterator in forward list you have the ability to step forward only not backward
    fl.insert_after(it , {1,2,3,4}); //1 2 3 4 1 2 3
    fl.emplace_after(it , 7);
    it++; //it-- is wrong
    fl.assign(5 , 7);//reinitialize the list (number of items , item) other than this is written as given
    fl.assign({5,4,6});
    fl.push_front(1); //do more operations than emplace
    fl.emplace_front(1); //differ from push is that it store the value directly in the memory
    fl.pop_front();
    fl.insert_after(fl.begin() , 5); //adds after the given position
    fl.insert_after(fl.before_begin() , 3);//adds in the given position
    for(int &x : fl) //another way of doing for loop in the STLs pointer on the list of same type of items
    {
        cout<<x<<" ";
    }
    auto f = next(fl.begin()); //(begin() , no of steps)
    cout<<*f<<endl; //prints the direct next element after the first element
    fl.erase_after(fl.begin()); //removes after a certain position

    auto it = next(it , 3);
    fl.erase_after(it);
    fl.remove(3); //removes all frequency of number given as parameter
    fl.remove_if(3); //or we make a boolean function and passes it
    fl.splice_after(fl1.before_begin() , fl2 , fl2.begin()); //copies all fl2 into fl1 before begin and removes all fl2 in case third parameter it is a specified number to be copied and when a fourth parameter is added then it is a range

    return 0;
}
