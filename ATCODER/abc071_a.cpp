//In the name of ALLAH, Most Gracious, Most Merciful
// #include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

// Hotash hoya habe na !!!

void solve()
{
	int x, a, b; 
	cin >> x >> a >> b;
	if (abs(x-a) < abs(x-b))
		cout << "A" << endl;
	else 
		cout << "B" << endl; 
}
 

int main()
{
	solve();
    return 0;
}

