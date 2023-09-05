#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    int cases , freq[100000]={0};cin>>cases;
    while(cases--)
    {
        bool adding , subtracting , division , multiply = false;
        int num1 , num2 , counter=0;
        cin>>num1>>num2;
        for(int i=1;i<=4;i++)
        {
            if(adding==false)
            {
                freq[num1+num2]++;
                adding=true;
            }
            if(subtracting==false)
            {
                freq[abs(num1-num2)]++;
                freq[abs(num2-num1)]++;
                subtracting==true;
            }
            if(division==false)
            {
                freq[(int)num1/num2]++;
                freq[(int)num2/num1]++;
                division==true;
            }
            if(multiply==false)
            {
                freq[num1*num2]++;
                freq[num2*num1]++;
                multiply==true;
            }
        }
        for(int i=0;i<100000;i++)
        {
            if(freq[i]>0)
            {
                counter++;
            }
        }
        cout<<counter<<endl;
    }
}
