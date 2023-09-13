#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    int cases;cin>>cases;
    double freq[6]={0};
    while(cases--)
    {
        int num1 , num2 , j=0 , counter=0;
        cin>>num1>>num2;
        int add=0 , mult=0 , div=0 , sub=0;
        for(int i=0;i<6;i++)
        {
            if(add==0)
            {
                freq[j]=num1+num2;
                add=1;
            }
            if(mult==0)
            {
                freq[++j]=num1*num2;
                mult=1;
            }
            if(div==0)
            {
                freq[++j]=(double)num1/num2;
                freq[++j]=(double)num2/num1;
                div=1;
            }
            if(sub==0)
            {
                freq[++j]=num1-num2;
                freq[++j]=num2-num1;
                sub=1;
            }
        }
        sort(freq , freq+6);
        for(int i=1;i<=6;i++)
        {
            if(freq[i-1]!=freq[i])
            {
                counter++;
            }
        }
        cout<<counter<<endl;
    }
}
