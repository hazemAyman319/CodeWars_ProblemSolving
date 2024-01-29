#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n;
   cin >> n;
   string s;
   cin >> s;
   int freq[125]={};
   int use [125]={};
   for (int i=0; i<s.size(); i++)
   {
      freq[int(s[i])]++;
   }
   int cnt=0;
   for (int i=97; i<123; i++)
   {
      if (freq[i]!=0)
      cnt++;
   }
   if (cnt<n)
   {
      cout << "NO";
      return 0;
   }
   cout << "YES";
   int c =0;
   int line =0;

    for (int i=0 ; i<s.size(); i++)
   {
      if (use[int(s[i])]==0)
      {
   if(line==n-1)
   break;
         cout << endl;
         cout << s[i];
         c++;
         line++;
         use[int(s[i])]++;
      }
      else
      {
         cout << s[i];
         c++;
      }
   }

    cout << endl;
    s.erase(0 ,c);
    cout << s;

}
