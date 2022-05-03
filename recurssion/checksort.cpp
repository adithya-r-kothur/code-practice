//check wheather the given array is sorted or not 

#include<bits/stdc++.h>

using namespace std;

bool checksort(int a[] ,int n )
{
    if(n==1)
    {
        return 1;
    }
    int restarray = checksort(a+1,n-1);

    return  (a[0]<=a[1] && restarray) ;
    
        
    
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

    cout<<checksort(a,n);
    return 0;
}


