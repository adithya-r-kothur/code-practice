#include<iostream>
using namespace std;



 int fact(int num){
     int number=1;
     for(int i=1; i<=num; i++){
         number=number*i;
     }
     return number;
 }

int main()
{

    int n,r;
    cin>>n>>r;
     int ans = fact(n)/(fact(r)*fact(n-r));
     cout<<ans;
    return 0;
}