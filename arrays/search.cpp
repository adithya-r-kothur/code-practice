#include<iostream>
using namespace std;
int linearsearch(int arr[],int n, int num){

    
for(int i=0; i<n;i++){
    if(arr[i]==num){
        return i;
        
    }
    
}
return -1;
}

int main()
{
   int n;
   cin>>n;
    

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int num;
    cin>>num;
    cout<<linearsearch(arr,n,num);

    return 0;
}