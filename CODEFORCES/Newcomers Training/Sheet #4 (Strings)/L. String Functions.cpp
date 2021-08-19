#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b ;
	cin >> a >> b;
	string strMain;
	cin >> strMain;
	while(b--)
	{
		string str;
		cin >> str;

		if (str == "pop_back") strMain.pop_back();
		else if (str == "front") cout << strMain.front() << endl;
		else if (str == "back") cout << strMain.back() << endl;
		else if (str == "sort") 
		{
			int p, q;
			cin >> q >> p;

			if (q > p) swap(q, p);

			sort(strMain.begin() + q - 1 , strMain.begin() + p);
		}
		else if (str == "reverse") 
		{
			int p, q;
			cin >> q >> p;

			if (q > p) swap(q, p);

			reverse(strMain.begin() + q - 1 , strMain.begin() + p);
		}
		else if (str == "print")
		{
			int n;
			cin >> n;
			// for (int i=1; i<=n; i++)
			// {
			// 	cout << strMain[i] ;
			// }
			cout << strMain[n-1] <<endl;
		}
		else if (str == "substr")
		{
			int p, q;
			cin >> p >> q;

			if (q > p) swap(p, q);

			cout << strMain.substr(q - 1, p - q +1) << endl;
		}
		else if (str == "push_back")
		{
			char n;
			cin >> n;
			strMain.push_back(n);
		}
	}

	return 0;
}