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
   int arr[100],i,n,diff,s;
   cin>>n>>diff;
   for(i=0;i<n;i++)
    cin>>arr[i];
   for(i=0;i<n;i++)
     s = s + arr[i];
	  int c = (s+diff)/2;
    cout<<count(c,arr,n);
	 return 0;
}
