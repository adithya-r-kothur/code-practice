#include<bits/stdc++.h>


using namespace std;


int factorial_n(int n)
{
    if(n==1)
    {
        return 1;
    }
    int right_part = factorial_n(n-1);
    
    return n*right_part;
}
int main()
{
    int n;
    cin>>n;
  cout<<factorial_n(n);
}