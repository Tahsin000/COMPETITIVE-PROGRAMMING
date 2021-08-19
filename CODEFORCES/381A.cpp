//In the name of ALLAH, Most Gracious, Most Merciful

// Hotash Hoya jabe na !!
#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
	int n, arr[10010];
	cin >> n;
	for (int i =0; i<n; i++)
	{
		cin >> arr[i];
	}
 
	int p = 0 , q = n-1, tmp = 0, rem = 0;
	for (int i =0; i<n; i++)
	{
		if (i%2 == 0)
		{
			if (arr[q] > arr[p])
				tmp += arr[q--];
			else
				tmp += arr[p++];
		}
		else
		{
			if (arr[q] > arr[p])
				rem += arr[q--];
			else
				rem += arr[p++];
		}
	}
	cout << tmp << " " << rem << endl;
	
	
}
 
 
int main()
{
 	
	solve ();
    return 0;
}