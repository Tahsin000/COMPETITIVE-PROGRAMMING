/*
    بسم الله الرحمن الرحيم

     الجامعة الإسلامية العالمية شيتاغونغ

    لا تحزن ان الله معنا
*/

///////////// IIUC - 49 /////////////

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 1000000007
#define fr(i, a, b) for (ll i=a; i<b; i++)
#define rfr(i, a, b) for (ll i=a; i>=b; i--)
#define dev(x) cout << #x << " : " << x << endl;
#define all(n) n.begin(), n.end()
#define uper(n) transform(n.begin(), n.end(), n.begin(), ::toupper);
#define lower(n) transform(n.begin(), n.end(), n.begin(), ::tolower);

// ll arr[mx]= {0}, prime[mx];
int binarySearch(int arr[], int l, int r, int x);
ll gcd(ll a, ll b);
ll lcm(ll a, ll b);   
ll BigMod(ll b, ll p, ll m);

/////////////////////////////////////////////////////

void solve()
{
    ll n , sumA= 0, sumB = 0, f =0;
    string str;
    cin >> n >> str;
    fr(i, 0, n)
    {
        if (str[i] != '4' && str[i] != '7')
        {
            f = 1;
            cout << "NO\n";
            break;
        }
        if(i < n/2) 
            sumA += (int)str[i];
        else sumB += (int)str[i];
    }
    // dev(sumA);
    // dev(sumB);
    if(!f)
    {
        if(sumA == sumB) cout << "YES\n";
        else cout << "NO\n";
    }
}

/////////////////////////////////////////////////////

int main()
{
    // fun();
    solve();
   
    // test();
    return 0;
}

ll gcd(ll a, ll b)
{
    if (b==0) return a;
    return gcd(b, a%b);
}

ll BigMod(ll b, ll p, ll m)
{
    if (p == 0) return 1;

    ll ans = BigMod(b, p/2, m);
    ans = ( ans * ans ) % m;
    if (p % 2 == 1) ans = (ans * b) % m;
    return ans;
}

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l+(r-l) / 2;
        if (arr[mid] == x) return mid;
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
        return binarySearch(arr, mid+1, r, x);
    }
    return -1 ;
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}


