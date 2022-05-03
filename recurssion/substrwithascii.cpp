//print all the substring with thier ascii number of the given string

#include<bits/stdc++.h>

using namespace std;

void subsqascii(string s , string ans)
{
    if(s.length() == 0)
    {
        cout<<ans<<endl;
        return ;
    }

    char ch = s[0];
    int code =ch;

    string ros = s.substr(1);
    subsqascii(ros,ans);
    subsqascii(ros,ans+ch);
    subsqascii(ros,ans+to_string(code));
    
}

int main()
{
    subsqascii("abc","");
    return 0;
}