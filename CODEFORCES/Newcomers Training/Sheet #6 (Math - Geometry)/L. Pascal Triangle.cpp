#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, j, rem = 1;
    cin >> n;
    for (int i=0; i<n; i++){
        for (j=0; j<=i; j++){
            if (j==0 || i==0)
                rem = 1;
            else
                rem = rem*(i-j+1)/j;  /// (row - col + 1) / row [formula]
            cout << rem << " ";
        }
        cout << endl;
    }

    return 0;
}