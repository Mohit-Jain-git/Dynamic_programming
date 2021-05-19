#include<bits/stdc++.h>
using namespace std;
bool issubsetsum(int sum,int arr[],int n)
{ 
   if(sum==0)
    return true;
   if(n==0)
    return false;
   if(arr[n-1]>sum)
    return issubsetsum(sum,arr,n-1);
	else
	 return issubsetsum(sum-arr[n-1],arr,n-1) || issubsetsum(sum,arr,n-1);	 
}
int main()
{ 
   int arr[100],i,n,sum;
   cin>>n>>sum;
   for(i=0;i<n;i++)
    cin>>arr[i];
   if(issubsetsum(sum,arr,n)==true)
    cout<<"Found a subset with given sum";
	else
	 cout<<"No subset with given sum";
	 return 0;
}
