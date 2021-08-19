#include <bits/stdc++.h>
using namespace std;



int main()
{
	char str[1000100];
	cin >> str;
	int flag = 0;
	for (int i=0; str[i]; i++)
	{
		for (int j=i+1; str[j]; j++)
		{
			if (str[i] == str[j])
			{
				flag = 1;
				break;
			}
		}
	}
	if (flag == 1) cout << "no" << endl;
	else cout << "yes" << endl;
}