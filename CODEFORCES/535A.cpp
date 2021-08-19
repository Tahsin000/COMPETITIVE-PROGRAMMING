/*
    بسم الله الرحمن الرحيم

     الجامعة الإسلامية العالمية شيتاغونغ

    لا تحزن ان الله معنا
*/

///////////// IIUC - 49 /////////////

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 100000000
#define fr(i, a, b) for (ll i=a; i<b; i++)
#define rfr(i, a, b) for (ll i=a; i>=b; i--)
#define dev(x) cout << #x << " : " << x << endl;
#define HHJN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define all(n) n.begin(), n.end()
#define uper(n) transform(n.begin(), n.end(), n.begin(), ::toupper);
#define lower(n) transform(n.begin(), n.end(), n.begin(), ::tolower);

#define vl(n) std::vector<ll> v(n+10);
#define pb push_back

// ll arr[mx]= {0}, prime[mx];
int binarySearch(int arr[], int l, int r, int x);
ll gcd(ll a, ll b);
ll lcm(ll a, ll b);   
ll BigMod(ll b, ll p, ll m);
void sieve (vector<ll>&v);

/////////////////////////////////////////////////////

void solve()
{
    string s;
    cin >> s;
    if(s.size() == 1)
    {
        switch(s[0])
        {
            case '0':
            cout << "zero" << endl;
            break;
         
            case '1':
            cout << "one" << endl;
            break;
                
            case '2':
            cout << "two" << endl;
            break;
                
            case '3':
            cout << "three" << endl;
            break;
                
            case '4':
            cout << "four" << endl;
            break;
                
            case '5':
            cout << "five" << endl;
            break;
                
            case '6':
            cout << "six" << endl;
            break;
                
            case '7':
            cout << "seven" << endl;
            break;
                
            case '8':
            cout << "eight" << endl;
            break;
                
            case '9':
            cout << "nine" << endl;
            break;
        }
    }
    else if(s == "10") cout << "ten\n";
    
    else if(s == "11") cout << "eleven\n";
    else if(s == "12") cout << "twelve\n";
    else if(s == "13") cout << "thirteen\n";
    else if(s == "14") cout << "fourteen\n";
    else if(s == "15") cout << "fifteen\n";
    else if(s == "16") cout << "sixteen\n";
    else if(s == "17") cout << "seventeen\n";
    else if(s == "18") cout << "eighteen\n";
    else if(s == "19") cout << "nineteen\n";
    else if(s == "20") cout << "twenty\n";
    else if (s.size() ==2)
    {
        if (s[0] == '2') cout << "twenty";
        if (s[0] == '3') cout << "thirty";
        if (s[0] == '4') cout << "forty";
        if (s[0] == '5') cout << "fifty";
        if (s[0] == '6') cout << "sixty";
        if (s[0] == '7') cout << "seventy";
        if (s[0] == '8') cout << "eighty";
        if (s[0] == '9') cout << "ninety";
        if(s[1] != '0') cout << "-";
        switch(s[1])
    {
        case '1':
        cout << "one" << endl;
        break;
            
        case '2':
        cout << "two" << endl;
        break;
            
        case '3':
        cout << "three" << endl;
        break;
            
        case '4':
        cout << "four" << endl;
        break;
            
        case '5':
        cout << "five" << endl;
        break;
            
        case '6':
        cout << "six" << endl;
        break;
            
        case '7':
        cout << "seven" << endl;
        break;
            
        case '8':
        cout << "eight" << endl;
        break;
            
        case '9':
        cout << "nine" << endl;
        break;

    }
    }
}

/////////////////////////////////////////////////////

int main()
{
    // fun();
    HHJN;
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

void sieve (vector<ll>&v)
{
    v.assign(MX, 0);
    v[0] = 1;
    v[1] = 1;
    for (int i=4; i<=MX; i+=2) v[i] = 1;

    for (int i=3; i*i<=MX; i+=2)
    {
        if (v[i] == 0)
        {
            for (int j=i*i; j<=MX; j+= i*2)
            {
                v[j] = 1;
            }
        }
    }

}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}


