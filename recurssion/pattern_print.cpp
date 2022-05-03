<<<<<<< HEAD
#include<bits/stdc++.h>

using namespace std;

void pattern_print(int n)
{  
    if(n==1)
    {
        cout<<1<<"\n";
        return; 
    }
      for(int i=1;i<=n;i++)
        cout<<i<<" ";
    
    cout<<"\n";    
    pattern_print(n-1);
    for(int i=1;i<=n;i++)
        cout<<i<<" ";
    
    cout<<"\n";
}

int main()
{
    int n;
    cin>>n;
    pattern_print(n);
    return 0;
=======
#include<bits/stdc++.h>

using namespace std;

void pattern_print(int n)
{  
    if(n==1)
    {
        cout<<1<<"\n";
        return; 
    }
      for(int i=1;i<=n;i++)
        cout<<i<<" ";
    
    cout<<"\n";    
    pattern_print(n-1);
    for(int i=1;i<=n;i++)
        cout<<i<<" ";
    
    cout<<"\n";
}

int main()
{
    int n;
    cin>>n;
    pattern_print(n);
    return 0;
>>>>>>> 2b29ab911d6bae95ad593c794cf2496ea405ebe1
}