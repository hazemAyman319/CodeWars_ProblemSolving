#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string full_name;
    getline(cin , full_name); //if we take a variable before getline we must put cin.ignore() to avoid error
    getline(cin , full_name , '-') //until a specific character
    full_name.clear(); //full_name=" "
    full_name.push_back('X'); //or by using + to concatenate in a specific order
    full_name.pop_back(); //removes last character
    *full_name.begin(); //return the value of first character
    full_name.erase(pos , how many characters after); //.erase(pos) removes from this position till the end
    full_name.find('H'); //produces the index of the char or string or -1 if not found
    if(Full_name.find('H')!=string::npos)
    {
        //do something if the H is found and not notpos
    }
    string first_name = full_name.substr(start index , how many steps); //substr(pos) till the end
    full_name.replace(start , steps , "string to be put");
    return 0;
}
