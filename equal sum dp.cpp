#include<bits/stdc++.h>
using namespace std;
bool issubsetsum(int sum,int arr[],int n)
{ 
    bool subset[n+1][sum+1];
	int i,j;
     for(i=0;i<n+1;i++)
	  subset[i][0] = true;
	 for(i=0;i<sum+1;i++)
	   subset[0][i] = false;
	
	 for(i=0;i<n+1;i++)
	 { 
	     for(j=0;j<sum+1;j++)
	    { 
	     
	     if(j>=arr[i-1])
	      
		    subset[i][j] = subset[i-1][j] || subset[i-1][j-arr[i-1]];
		   
	     if(j<arr[i-1])
		   
		    subset[i][j] = subset[i-1][j]; 
	 }
}
	 return subset[n][sum];
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
	 cout<<"Cannot be divided into two subset of equal sum.";
	 return 0;
}
