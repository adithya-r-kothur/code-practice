// find gcd of given two number with ecludian algo
#include<iostream>
using namespace std;

int findgcd(int a,int b)
{
    
    while(b!=0)
    {
       int rem= a%b;
       
       a=b;
       b =rem;

    }
    return a;
}

int main()
{
    int a,b;
    cin>>a>>b;
    
    cout<<findgcd(a,b);


    return 0;
}