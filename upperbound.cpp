#include <bits/stdc++.h>
using namespace std;

int upperbound(int arr[], int n, int k){
    int l=0; 
    int h=n-1;
    int mid;
    int ans=n;
   while(l<=h){
     mid= l+(h-l)/2;
    if(arr[mid]>k){
        ans=mid;
        h=mid-1;
    }
    else{
        l=mid+1;
    }

   }
   return ans;

}

int main()
{
int n=8;
int arr[]={1,1,2,4,4,4,5,6};

int k=4;

int ub=upperbound(arr,8,4);
cout<<ub;

    return 0;

}