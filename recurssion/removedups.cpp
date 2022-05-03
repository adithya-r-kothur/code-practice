// you need to remove duplicates from the string
#include<bits/stdc++.h>

using namespace std;

string removedups(string s)
{
    if(s.length() == 0)
    {
        return "";
    }

    char ch =s[0];
     string ans = removedups(s.substr(1));

     if(ch==ans[0])
     {
         return ans;
     }
     else
     {
         return (ch+ans);
     }
}
int main()
{
   cout<<removedups("aaabbbbdddeee");
    return 0;
}