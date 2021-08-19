#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[100010], cont = 0;

    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for (int i=0; i<n; i++)
    {
        if (arr[i] == arr[i+1]) continue;
        else cont++;
    }

    cout << cont << endl;
    return 0;
}