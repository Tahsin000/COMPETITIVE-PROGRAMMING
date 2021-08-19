#include<bits/stdc++.h>
using namespace std;

void fun()
{
    int n, arr[110][110], sum =0, sum1 = 0;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
            if (n-i-1 == j)
            {
                sum1+= arr[i][j];
            }
        }
    }
    int ans = abs (sum - sum1);
    cout << ans << endl;
}

int main()
{
    fun();
    return 0;
}