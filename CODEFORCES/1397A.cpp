#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, arr[1001] = {0}, flag = 0;
		cin >> n;
		for (int i=0; i<n; i++)
		{
			string str;
			cin >> str;
			for (int j=0; j<str.size(); j++)
			{
				arr[str[j] - 'a'] ++;
			}
		}
		for (int i=0; i<26; i++)
		{
			if (arr[i]%n != 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1) cout << "NO" << endl;
		else cout << "Yes" << endl;

		for (int i=0; i<26; i++)
		{
			arr[i] = 0;
		}

	}
}