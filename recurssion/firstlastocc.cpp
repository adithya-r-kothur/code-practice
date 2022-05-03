//find the first and last occurance in an array


#include<bits/stdc++.h>

using namespace std;

int firstoccurance(int a[] , int  n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
  
  if(a[i] == key)
  {
      return i;
      
  }
  
  
  return firstoccurance(a,n,i+1,key);
  
}

int lastoccurance(int a[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
      int restarray =  lastoccurance(a,n,i+1,key);

      if(restarray!=-1)
      {
          return restarray; 
      }

    if(a[i]==key)
    {
        return i;
    }
    return -1;
    
}

int main()
{
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<firstoccurance(a,n,0,key)<<endl;
    cout<<lastoccurance(a,n,0,key)<<endl;
    return 0;
}