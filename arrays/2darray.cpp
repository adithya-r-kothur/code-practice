#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int num ;
    cin>>num;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==num){
                cout<<"element found "<<endl;
            }
           
        }
    }
    return 0;
}