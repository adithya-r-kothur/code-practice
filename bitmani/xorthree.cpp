//program to find a unique number in a array where all number are repeated thrice except one

#include<iostream>
using namespace std;

bool getBit(int n, int pos)
{
    return ((n & (1<<pos) ) != 0);
}

int setBit(int n, int pos)
{
    return (n|(1<<pos));
}

int unique(int a[],int n)
{
    int result =0;
    for(int i=0;i<64;i++)
    {
          int sum =0;
          for(int j=0;j<n;j++)
          {
              if(getBit(a[j], i))
              {
                    sum ++;
              }
          }
          if(sum%3!=0)
          {
             result = setBit(result ,i);
          }
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
 cout<<unique(a,n);

    return 0;
}