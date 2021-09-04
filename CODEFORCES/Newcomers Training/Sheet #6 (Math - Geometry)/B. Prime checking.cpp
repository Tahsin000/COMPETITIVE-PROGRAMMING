#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i, f = 0;
    cin >> n;
    for (i=2; i*i<=n; i++){
        if (n%i == 0){
            f = 1;
            break;
        }
    }
    ( n == 1 ) ? f = 1 : f = f;
    ( f == 0 ) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}
 