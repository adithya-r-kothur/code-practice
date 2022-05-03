#include<iostream>
#include<climits>
using namespace std;

int kaden(int a[], int n)
{
    int currentsum=0;
    int maxsum = INT_MIN;

    for(int i=0;i<n;i++)
    {
       currentsum+=a[i];
       if(currentsum<0)
       {
           currentsum=0;
       }
       maxsum = max(maxsum,currentsum);
    }

return maxsum;


}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n; i++)
    {
        cin>>a[i];
    }

    int wrapping;
    int nonwrapping;

    nonwrapping  = kaden(a,n);
    int totalsum=0;

    for(int i=0;i<n;i++)
    {
        totalsum+=a[i];
        a[i]=-a[i];
    }

    wrapping = totalsum+kaden(a,n);

    cout<<max(wrapping , nonwrapping)<<endl;

    return 0;
}