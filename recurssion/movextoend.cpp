//move all the x to end in the given string

#include<bits/stdc++.h>

using namespace std;

string movextoend(string s)
{
    if(s.length()== 0)
    {
        return "";
    }
    char ch=s[0];

    string ans = movextoend(s.substr(1));
    if(ch == 'x')
    {
        return ans+ch;
    }
    else
    {
        return ch+ans;
    }
} 

int main()
{
    cout<<movextoend("axxbdxcefxhix");
    return 0;
}