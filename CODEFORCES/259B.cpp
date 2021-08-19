//In the name of ALLAH, Most Gracious, Most Merciful
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
 
// Hotash hoya habe na !!!
 
 
void solve()
{
	int n = 3, arr[10][10];
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			cin >> arr[i][j];
		}
	}
 
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			if (arr[i][j] == 0 && arr[i+1][j+1] == 0 && arr[i+2][j+2] == 0)
			{
				arr[i][j] = ( arr[i+2][j+1] + arr[i+1][j+2] ) / 2;
				arr[i+1][j+1] = ( arr[i+2][j] + arr[i][j+2] ) / 2;
				arr[i+2][j+2] = (arr[i+1][j] + arr[i][j+1]) / 2;
			}
			// else if (arr[i][j+2] == 0 && arr[i+1][j+1] == 0 && arr[i+2][j] == 0){
			// 	arr[i][j+2] = arr[i][j];
			// 	arr[i+1][j+1] = arr[i+1][j];
			// 	arr[i+2][j] = arr[i+2][j+2];
			// }
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
 
}
 
 
int main()
{
	solve();
    return 0;
}