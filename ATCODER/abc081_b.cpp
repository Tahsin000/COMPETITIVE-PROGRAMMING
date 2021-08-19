#include <bits/stdc++.h>
using namespace std;

// Hotash hoya habe na !!!

void solve()
{

    long long int arr[10010];
	int a, b, tmp =0, cont = 0, n, f = 0;
	cin >> n;

	for (int i=0; i<n; i++)
	{
		cin >> arr[i];
	}

	while(1)
	{
		for (int i=0; i<n; i++)
		{
			if (arr[i] %2 == 0)
				tmp ++;
			else{
                f = 1;
				break;
			}
		}
		if (tmp == n)
		{
			cont ++;
			for (int j=0; j<n; j++)
            {
                arr[j] /= 2;
            }

			tmp = 0;
		}
		else if (f == 1)
            break;
	}
	cout << cont << endl;


//	cout << tmp << endl;



}


int main()
{

    solve ();
    return 0;
}
