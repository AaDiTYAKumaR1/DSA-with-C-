#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={0,-1,-2,3,4,-5,6,4,7,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    queue<int>q;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0) 
        q.push(i);
    }
    int i=0;
    while(i<n-k+1)
    {
        while(q.size()>0 && i>q.front()) q.pop();
         if(q.size()==0 || i+k<=q.front()) ans.push_back(0);
         else  {
            ans.push_back(arr[q.front()]);
         }
         i++;
    }                                                           
    for(auto it : ans) cout<<it<<" ";
    
}