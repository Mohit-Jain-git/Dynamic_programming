#include<bits/stdc++.h>
using namespace std;
int issubsetsum(int arr[],int sum,int n)
{ 
    bool subset[n+1][sum+1];
	int i,j;
     for(i=0;i<n+1;i++)
	  subset[i][0] = true;
	 for(i=1;i<sum+1;i++)
	   subset[0][i] = false;
	
	 for(i=1;i<n+1;i++)
	 { 
	     for(j=1;j<sum+1;j++)
	    {
		     if(arr[i-1]>j) 
                subset[i][j] = subset[i - 1][j];
              else     
                subset[i][j] = subset[i-1][j] || subset[i - 1][j - arr[i - 1]]; 
	 }
}
	 int diff = INT_MAX;
	 for(int j=sum/2;j>=0;j--)
	  { 
	      if(subset[n][j]==true)
	      {
	      diff = sum - 2*j;
	      break;
	     }
	  }
	 
	 return diff;
}
int main()
{ 
   int arr[100],i,n,sum=0;
   cin>>n;
   for(i=0;i<n;i++)
    cin>>arr[i];
   for(i=0;i<n;i++)
    sum = sum + arr[i];
    cout<<"The minimum difference between two subsets is: "<<issubsetsum(arr,sum,n); 
	 return 0;
}
