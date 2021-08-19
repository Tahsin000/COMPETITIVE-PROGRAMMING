#include <bits/stdc++.h>
using namespace std;

// Hotash hoya habe na !!!

// long long int arr[10000120];
void solve()
{
	int n;
	cin >> n;
	int arr[100100], sum =0;
	for (int i=0; i<n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	long long int m = sum / n;
	int cont =0;
	for (int i=0; i<n-1; i++)
	{
		if (arr[i] == m)
		{
			cont ++;
		}
		else if (arr[i] > m)
		{
			arr[i+1] += (arr[i] - m);
			arr[i] = m;
			cont ++;
		}
		else 
		{
			arr[i+1] -= (m - arr[i]);
			arr[i] = m;
			cont ++;
		}
	}
	if (arr[n-1] == m)
		cont ++;
	cout << cont << endl;

}


int main()
{

    solve ();
    return 0;
}
