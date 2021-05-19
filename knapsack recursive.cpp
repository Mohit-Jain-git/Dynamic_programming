#include <iostream>
#include <string>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
int knapsack(int w[], int val[], int n, int s)
{
  if (n == 0 || s == 0)
    return 0;
  else if (w[n - 1] <= s)
    return max(val[n - 1] + knapsack(w, val, n - 1, s - w[n - 1]), knapsack(w, val, n - 1, s));
  else if (w[n - 1] > s)
    return knapsack(w, val, n - 1, s);
}
int main()
{
  int w[100], val[100], n, s, i = 0;
  cin >> n;
  for (i = 0; i < n; i++)
    cin >> w[i];
  for (i = 0; i < n; i++)
    cin >> val[i];
  cin >> s;
  int c = knapsack(w, val, n, s);
  cout<<c;
  return 0;
}
