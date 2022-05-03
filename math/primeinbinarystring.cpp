//find if a prime number is hidding in th binary string
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        string s;
        cin>>s;
        bool flag = false;

        int n = s.length();

        for(int i=0;i<n;i++)
        {
            if(s[i]=='1' && (s[i+1] =='0' || s[i+1] == '1'))
            {
                flag=true;
                cout<<"Yes"<<endl;
                break;
            }
        }
    if(flag == false)
    {
        cout<<"NO"<<endl;
    }
    }
    
    return 0;
}