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
    

    int rowstart=0;
    int colend=c-1;
    int colstart=0;
    int rowend=r-1;

    while(rowstart<=rowend && colstart<=colend)
    {
        for(int i=colstart;i<=colend;i++)
        {
            cout<<a[rowstart][i]<<" ";
        }
        rowstart++;


        for(int i=rowstart;i<=rowend;i++)
        {
            cout<<a[i][colend]<<" ";
        }
        colend--;

        for(int i=colend;i>=colstart;i--)
        {
            cout<<a[rowend][i]<<" ";
        }
        rowend--;

        for(int i=rowend;i>=rowstart;i--)
        {
            cout<<a[i][colstart]<<" ";
        }
        colstart++;
    }
    return 0;
}