#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
     int digit;
     int amstrong=0;
     int originaln=n;
     while(n>0){
         int subdigit=(n%10)*(n%10)*(n%10);
            amstrong+=subdigit;
            n=n/10;
     }
     if(amstrong==originaln){
         cout<<"its a amstrong number"<<endl;;
     }
     else{
         cout<<"its not a amstrong number";
     }
     cout<<amstrong;
return 0;
}