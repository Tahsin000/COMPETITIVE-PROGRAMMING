#include <bits/stdc++.h>
using namespace std;

void solve()
{
	
	int n;
	cin >> n;
	string str;
	cin >> str;
	for (int i=0; i<str.size(); i++)
	{
		cin >> str[i];
	}
	int tmp = 0;
	for (int i=0; i<str.size(); i++)
	{
		if (str[i] == str[i + 1])
		{
			tmp ++;
		}
	}
	cout << tmp << endl;
	
	
}


int main()
{
 	
	solve ();
    return 0;
}