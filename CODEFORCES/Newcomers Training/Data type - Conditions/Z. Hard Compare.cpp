#include <bits/stdc++.h>
using namespace std;
int x = 10;

int main()
{
	long long int a, b, c, d;
	cin >> a >> b >> c >> d ;

	if (pow (a, (double)b/d) > (double)c)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;

}