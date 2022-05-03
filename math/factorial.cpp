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

    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}