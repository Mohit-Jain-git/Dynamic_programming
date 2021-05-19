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
   int arr[100],i,n,sum=0;
   cin>>n;
   for(i=0;i<n;i++)
    cin>>arr[i];
   for(i=0;i<n;i++)
      sum = sum + arr[i]; 
      
   if(sum%2==0 && issubsetsum(sum/2,arr,n)==true)
    cout<<"Can be divided into two subset of equal sum.";
	else
	 cout<<"Can not be divided into two subset of equal sum.";
	 return 0;
}
