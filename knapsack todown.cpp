#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int knapsack(int wt[],int val[],int w,int n)
{ 
    int i,j;
    int t[n+1][w+1];
    for(i=0;i<n+1;i++)
    {
    for(j=0;j<w+1;j++)
    { 
        if(i==0 || j==0)
        t[i][j]=0;
        else if(wt[i-1]<=j)
		t[i][j] = max(val[i-1] + t[i-1][j-wt[i-1]],t[i-1][j]);
		else
		t[i][j] = t[i-1][j]; 
	}
 }
 return t[n][w];
}
int main()
{ 
  int i,n,w,wt[100],val[100];
  cin>>n>>w;
  for(i=0;i<n;i++)
    cin>>wt[i];
  for(i=0;i<n;i++)
    cin>>val[i];
  int c = knapsack(wt,val,w,n);
  cout<<c;
  return 0; 	  
}
