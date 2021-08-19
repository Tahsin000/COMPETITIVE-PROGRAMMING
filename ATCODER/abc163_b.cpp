#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int arr[10010], sum =0;
	for (int i=0; i<m; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	if (n >= sum)
	{
		cout << n - sum << endl;
	}
	else cout << "-1" << endl; 
}