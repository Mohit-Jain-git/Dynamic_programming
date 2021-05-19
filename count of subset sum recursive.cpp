#include<bits/stdc++.h>
using namespace std;
int count(int sum,int arr[],int n)
{ 
   if(sum==0)
    return 1;
   if(n==0)
    return 0;
   if(arr[n-1]>sum)
    return count(sum,arr,n-1);
	else
	 return count(sum-arr[n-1],arr,n-1) + count(sum,arr,n-1);	 
}
int main()
{ 
   int arr[100],i,n,sum;
   cin>>n>>sum;
   for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<count(sum,arr,n);
	 return 0;
}
