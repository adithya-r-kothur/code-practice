// find n rise to power of p

#include<iostream>
using namespace std;

int multiply(int n ,int p)
{
    if(p==0)
    {
        return 1;
    }
    int prevmul = multiply(n,p-1);

    return n*prevmul;
}

int main()
{

    int n,p;
    cin>>n>>p;

    cout<<multiply(n,p)<<endl;

    return 0;
}