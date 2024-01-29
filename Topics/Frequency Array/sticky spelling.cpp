#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <bits\stdc++.h>
using namespace std;
int main()
{
   int num ,counter=0, freq1[27]={0} , freq2[27]={0};
   cin>>num;
   char word1[num] , word2[num];
   for(int i=0;i<num;i++)
   {
       cin>>word1[i];
   }
   for(int i=0;i<num;i++)
   {
       cin>>word2[i];
   }
   for(int i=0;i<num;i++)
   {
       freq1[word1[i]-'a']++;
       freq2[word2[i]-'a']++;
   }
   for(int i=0;i<27;i++)
   {
       if(freq1[i]!=freq2[i])
       {
           counter+=max(freq1[i] , freq2[i])-min(freq1[i] , freq2[i]);
       }
   }
   cout<<counter/2;
}

/*
string word1 , word2;
    bool freq1[27]={false};
    bool freq2[27]={false};
    int num , counter=0;cin>>num;
    cin>>word1>>word2;
    for(int i=0;i<num;i++)
    {
        freq1[word1[i]-'a']=true;
        freq2[word2[i]-'a']=true;
    }
    for(int i=0;i<27;i++)
    {
        if(freq1[i]!=freq2[i])
        {
            counter++;
        }
    }
    cout<<counter;
*/
