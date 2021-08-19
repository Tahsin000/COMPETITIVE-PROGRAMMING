#include <bits/stdc++.h>
using namespace std;
int x = 10;

int main()
{
	string str;
	int a, b;
	cin >> a >> str >> b;
	(str[0] == '-') ? cout << a - b << endl : cout << a + b << endl; 

}