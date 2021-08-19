#include <bits/stdc++.h>
using namespace std;
int main()
{

	int a, b, c, d, Ans = 0;
	cin >> a >> b >> c >> d ;
	string str ;
	cin >> str;

	for (int i=0; i<str.size(); i++)
	{
		switch(str[i])
		{
			case '1' :
				Ans += a;
				break;

			case '2' :
				Ans += b;
				break;

			case '3' :
				Ans += c;
				break;

			case '4' :
				Ans += d;
				break;
		}
	}
	cout << Ans << endl;


	return 0;
}