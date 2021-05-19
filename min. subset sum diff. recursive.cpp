#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findmin(int arr[],int n,int i,int sum)
{ 
    if(n==0)
    return abs(sum-i-i);
    else
    return min(findmin(arr,n-1,i+arr[n-1],sum),findmin(arr,n-1,i,sum));
}
int main()
{ 
   int i,arr[100],n,sum=0;
   cin>>n;
   for(i=0;i<n;i++)
    cin>>arr[i];
    for(i=0;i<n;i++)
     sum = sum + arr[i];
    cout<<"The minimum difference between two subsets is "<<findmin(arr,n,0,sum);
	return 0; 
}
