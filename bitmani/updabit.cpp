#include<iostream>

using namespace std;

int updatebit(int n ,int pos ,int value)
{
   n =( n & (~(1<<pos))) ;

    return (n | (value<<pos))  ;
}
int main()
{
    int n, pos,b;
    cin>>n>>pos>>b;

    cout<<updatebit(n,pos,b);
    return 0;
}