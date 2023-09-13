#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{
  int freq[200]={0} , counter=0;
  string in; cin>>in;
  transform(in.begin(), in.end(), in.begin(), ::tolower);
  for(int i=0;i<in.size();i++)
  {
    freq[in[i]-'0']++;
  }
  for(int i=0;i<200;i++)
  {
    if(freq[i]>1)
      counter++;
  }
  cout<<counter;
  return 0;
}
