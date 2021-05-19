#include <bits/stdc++.h>
using namespace std;
int solve(int a[], int i, int j)
{
  if (i >= j)
    return 0;
  int min = INT_MAX;
  int temp;
  for (int k = i; k < j; k++)
  {
    temp = solve(a, i, k) + solve(a, k + 1, j) + a[i - 1] * a[k] * a[j];
    if (temp < min)
      min = temp;
  }
  return min;
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int c = solve(a, 1, n - 1);
  cout << c;
  return 0;
}