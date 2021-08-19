#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, p, q, cont = 0;

	cin >> a >> p ;
	int arrX[10010];
	int x = 0, y = 0;
	for (int i=0; i<p; i++)
	{
		cin >> arrX[i];
	}

	cin >> q;
	for (int i=p; i<(p+q); i++)
	{
		cin >> arrX[i];
	}

	sort(arrX, arrX + (p+q));


	for (int i=1; i<(p+q); i++)
	{
		if (arrX[i-1] != arrX[i])
			cont ++;
	}

	if ((cont == a-1) && (p != 0 || q != 0))
	{ 
		cout << "I become the guy." << endl;	
	} 
	else cout << "Oh, my keyboard!" << endl;

	return 0;
}