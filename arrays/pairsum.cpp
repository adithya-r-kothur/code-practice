#include<iostream>
using namespace std;

bool pairsum(int a[],int n,int k)
{
    int low,high;
    low=0;
    high=n-1;

    while(low<high)
    {
        if(a[low]+a[high]==k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(a[low]+a[high]<k)
        {
            low++;
        }
        else
        {
            high--;
          
        }
    }
    return false;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

  cout<<pairsum(a,n,k);


    return 0;
}