#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll arr[100010];
    ll arr1[100010];
    int n, m, flag, rem=0, j = 0, i;
    cin >> n >> m;
    for ( i=0; i<n; i++){
        cin >> arr[i];
    }
    for ( i=0; i<m; i++){
        cin >> arr1[i];
    }

    for (i=0; i<n; i++){
        if (arr1[j] == arr[i])
            j++;
    }
    if (j == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}