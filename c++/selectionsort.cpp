#include<iostream>
using namespace std;
int selectionsort(int arr[],int n){
    int i=0;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j])
                min=j;
        }
        swap(arr[min],arr[i]);
    }
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
   }
   return 0;}
int main()
{
int arr[7]={9,5,6,8,2,3,7};
selectionsort(arr,7);
return 0;
}