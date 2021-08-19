#include <bits/stdc++.h>
using namespace std;

// Hotash hoya habe na !!! 

void solve()
{
	int n;
	cin >> n;
	while(n--)
	{
		int a, b;
		cin >> a >> b;
		int o = 0, e = 0;
		int tmp =0, arr[100100];
		for (int i=0; i<a; i++)
		{
			cin >> arr[i];
		}
		for (int i=0; i<a; i++)
		{
			(arr[i] % 2 == 0) ? e++ : o++;
		}
		int d , m;
		m = min(e , b - 1);
		d = b - m;

		if (d % 2 == 0)
		{
			d ++;
		}

		if ( o >= d && d <= b) 
		{
			cout << "Yes" << endl;
		}
		else 
		{
			cout << "No" << endl;
		}
	}

}


int main()
{

    solve ();
    return 0;
}
