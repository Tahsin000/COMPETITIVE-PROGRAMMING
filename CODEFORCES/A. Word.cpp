//In the name of ALLAH, Most Gracious, Most Merciful

// Hotash Hoya jabe na !!

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i, n) for (ll i=0; i<n; i++)

ll gcd(ll a, ll b)
{
    if (b==0) return a;
    return gcd(b, a%b);
}

void solve()
{
    string str, stra, strA;
    cin >> str;
    ll a=0,A=0;
    for (int i=0; i<str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <='z') 
        {
            stra.push_back(str[i]);
            a++;
        }
        if (str[i] >= 'A' && str[i] <='Z') 
        {
            strA.push_back(str[i]);
            A++;
        }
    }
    if (a < A)
    {
        transform(str.begin(), str.end(), str.begin(), :: toupper);
        cout << str << endl;
    }
    else if (a > A)
    {
        transform(str.begin(), str.end(), str.begin(), :: tolower);
        cout << str << endl;
    }
    else 
    {
        if (stra.compare(strA) == 1)
        {
            transform(str.begin(), str.end(), str.begin(), :: tolower);
            cout << str << endl;
        }
        else 
        {
            transform(str.begin(), str.end(), str.begin(), :: toupper);
            cout << str << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}