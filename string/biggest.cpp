//biggest string in numeric string
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{

    string str = "64810148961";
    
    sort(str.begin(), str.end(),greater<int>());

    cout<<str<<endl;
    return 0;
}