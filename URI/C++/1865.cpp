#include <bits/stdc++.h>
using namespace std;
#define fr(i, n) for (ll i=0; i<n; i++)
#define frr(n, i) for (ll i=n-1; i>=0; i--)
#define ll long long int


vector<int> getvStr(string str)
{
	int t =0;
	std::vector<int> re;
	for (int i=0; i<str.size(); i++)
	{
		if (str[i] != ' ')
		{
			t = t * 10 + ( str[i] - '0');
		}
		if (str[i] == ' ' || i == str.size()- 1)
		{
			if (t != 0)
			{
				re.push_back(t);
				t = 0;
			}
		}
	}
	return re;
}

int gcd (int a, int b)
{
	if (b == 0) return a;
	return gcd( b, a%b );
}

void solve ()
{
	int n;
	cin >> n;
	while(n--)
	{
		string str;
		cin >> str;
		int a;
		cin >> a;
		if (str[0] == 'T' && str[1] == 'h' && str[2] == 'o' && str[3] == 'r')
			cout << "Y" << endl;
		else 
			cout << "N" << endl;
	}

}


int main()
{
	solve();
	return 0;
}