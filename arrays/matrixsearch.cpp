#include<iostream>
using namespace std;

int main()
{
    int n ,m ,target;
    cin>>n>>m;
    cin>>target;
    int a[n][m];
     
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             cin>>a[i][j];
         }
     }

     int r = 0;
     int c = m-1;
     bool flag =0;

     while(r < n && c >= 0 )
     {
         if(a[r][c]== target)
         {
             flag =1;
         }
         if(a[r][c]<target)
         {

             r++;
         }
         else{
             c--;
         }
     }
     if(flag){
         cout<<"element found"<<endl;

     }
     else{
         cout<<"element does not exsit"<<endl;
     }


    return 0;
}