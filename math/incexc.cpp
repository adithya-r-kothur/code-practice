//find the number of number divisible by given number between given larger number

#include<iostream>
using namespace std;

int divisible(int n, int p ,int q)
{
    int c1 = n/p;
    int c2 = n/q;
    int c3 =n/(p*q);

    return c1+c2-c3;
}

int main()
{
    int n,p,q;
    cin>>n>>p>>q;

    cout<<divisible(n,p,q)<<endl;
    return 0;
}