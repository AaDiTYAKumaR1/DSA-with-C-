#include<iostream>
using namespace std;
int merge(int arr1[],int n,int arr2[],int m,int arr3[] ){
    int i=0,j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }else
        arr3[k]=arr2[j];
    }
    while (i<n)
    {
        arr3[k++]=arr1[i++];
    }
    while (j<m)
    {
        arr3[k++]=arr2[j++];
    }
    for(int i=0;i<9;i++){
       // cout<<arr3[i]<<" ";
    }
    return 0;
    
    
}
int main()
{
int arr1[4]={1,2,3,4};
int arr2[5]={5,6,7,8,9};
int arr3[9]={0};
merge(arr1,4,arr2,5,arr3);
for(int i : arr3){
    cout<<i<<" ";
}
return 0;
}