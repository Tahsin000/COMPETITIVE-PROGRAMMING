#include <bits/stdc++.h>
using namespace std;
int x = 10;

int main()
{
	string str;
	cin >> str;
	for (int i=0; i<str.size(); i++)
	{
		if (str[i] == ',')
			cout << " ";
		else 
			cout << str[i];
	} 
	cout << endl;

}