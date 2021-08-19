//In the name of ALLAH, Most Gracious, Most Merciful
 
// Hotash hoya habe na !!!
 
#include <bits/stdc++.h> 
using namespace std;
#define ll long long 
#define fr(i, n)  for (ll i=0; i<n; i++)

ll gcd (int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a%b);
}

std::vector<int>GetStr(string str)
{
	int tmp = 0;
	std::vector<int> ra;
	for (int i=0; i<str.size(); i++)
	{
		if (str[i] != ' ')
			tmp = tmp * 10 + (str[i] - '0');
		if (str[i] == ' ' ||  i == str.size() - 1)
		{
			if (tmp != 0)
			{
				ra.push_back(tmp);
				tmp = 0;
			}
		}
	}
	return ra;
}
int sz =100010;

void sieve (vector<int>&v)
{
	v.assign(sz, 0);
	v[0] = 1;
	v[1] = 1;
	for (int i=4; i<=sz; i+=2) v[i] = 1;

	for (int i=3; i*i<=sz; i+=2)
	{
		if (v[i] == 0)
		{
			for (int j=i*i; j<=sz; j+= i*2)
			{
				v[j] = 1;
			}
		}
	}

}

void solve ()
{
	ll n, arr[100010] = {0}, flag=0;
	cin >> n;
	string str;
	cin >> str;
	if (n == 1) cout << "Yes" << endl;
	else
	{

		for (ll i=0; i<str.size(); i++)
		{
			arr[str[i]] ++;
			if (arr[str[i]] == 2)
			{
				flag = 1;
				break;
			}
		}
		(flag) ? cout << "Yes" : cout << "No";
		cout << endl;
	}
}
// void Stl(vector<int> &v)
// {
	
// 	v.assign(10, 1);
// }

int main()
{

	// vector<int> v;
	// Stl(v);

	// cout << v.size() << endl;
	solve();
	return 0;
}