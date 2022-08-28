#include <iostream>
using namespace std;

void MergeSortedArrays(int *a,int *b,int*c,int n,int m)
{
    int i=0,j=0,k=0;
    while(i<n and j<m)
    {
        if(b[i]<c[j])
        {
            a[k++]=b[i++];
        }
        else
        {
            a[k++]=c[j++];
        }
    }
    while(j<m)
    {
        a[k++]=c[j++];

    }
    while(i<n)
    {
        a[k++]=b[i++];
    }
}

void PrintArray(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main()
{
    int a[100],b[]={2,4,5,7},c[]={1,3,6,8,9,10};
    int n=sizeof(b)/sizeof(int);
    int m=sizeof(c)/sizeof(int);
    
    MergeSortedArrays(a,b,c,n,m);
    cout<<"Array b[]: ";
    PrintArray(b,n);
    
    cout<<"Array c[]: ";
    PrintArray(c,m);

    cout<<"\nMerged Sorted Array is :";
    PrintArray(a,m+n);
    

    return 0;
}
