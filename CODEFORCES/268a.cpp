#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    int tmp =0;
    int arrA[10010], arrB[10001];
    for (int i=0; i<n; i++)
    {
    	cin >> arrA[i];
    	cin >> arrB[i];
    }

    for (int i=0; i<n; i++)
    {
    	for (int j=0; j<n; j++)
    	{
    		if (arrA[i] == arrB[j])
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