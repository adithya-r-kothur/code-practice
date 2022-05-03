#include<iostream>
#include<climits>
using namespace std;
//program not correct minor mistakes are there
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
  
  int i=0;
  int curr=0 ,max=0;
  int st=0 ,maxst=0;

    while(1)
    {
    if(a[i]==' '  || a[i]=='\0')
    {
        if(curr>max)
        {
            max = curr;
            maxst =st;
        }
        
        curr=0;
        st =i+1;
    }
    
        curr++;
        if(a[i]=='\0')
        {
            break;
        }
        i++;
    }

    cout<<max<<endl;
    for(int i=0 ; i<max;i++)
    {
        cout<<a[i+maxst];
    }
    return 0;
}