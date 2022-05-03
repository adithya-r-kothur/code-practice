#include<bits/stdc++.h>


using namespace std ;


void merge(int arr[],int l,int mid,int r)
{
        int n1 = mid-l+1;
        int n2 = r-mid;

        int a[n1];
        int b[n2];


        for(int i=0;i<n1;i++)
        {
            a[i]=arr[l+i];
        }

        for(int i=0;i<n2;i++)
        {
            b[i]=arr[mid+1+i];
        }

        int it1=0,it2=0,k=l;

        while(it1<n1 && it2<n2)
        {
            if(a[it1]<b[it2])
            {
                arr[k]=a[it1];
                it1++;
                k++;
            }
            else
            {
                arr[k]=b[it2];
                it2++;
                k++;
            }
        }

        while(it1<n1)
        {
            arr[k]=a[it1];
            k++;it1++;
        }
        

        while(it2<n2)
        {
            arr[k]=b[it2];
            k++;it2++;  
        }
}

void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}

int main()
{

    int arr[]={5,4,3,2,1};
    mergesort(arr,0,4);

    for(int  i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<"\n";
    return 0;
}