#include<stdio.h>
void merge(int arr[],int l,int m,int h)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=h-m;
    int a1[n1];
    int a2[n2];
    for( i=0;i<n1;i++)
    {
        a1[i]=arr[l+i];
    }
    for( i=0;i<n2;i++)
    {
        a2[i]=arr[m+1+i];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1&&j<n2)
    {
        if(a1[i]<=a2[j])
        {
            arr[k++]=a1[i++];
        }
        else{
            arr[k++]=a2[j++];
        }
    }
    while(j<n2)
    {
        arr[k++]=a2[j++];
    }
    while(i<n1)
    {
        arr[k++]=a1[i++];
    }
    

}
void mergesort(int arr[],int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}
int main()
{
    int arr[]={ 3,5,12,7,9,2,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}