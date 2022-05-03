//print the given number in ncreasing and decreasing order 

#include<bits/stdc++.h>

using namespace std;

void dec(int n)
{
if(n==0)
{
    
    return;
}
cout<<n<<endl;
dec(n-1);
}

void inc(int n)
{
    if(n==0)
    {
        return ;
    }
  inc(n-1);
  cout<<n<<endl;
}


int main()
{
    int n;
    cin>>n;

    inc(n);
    dec(n);
    return 0;
}