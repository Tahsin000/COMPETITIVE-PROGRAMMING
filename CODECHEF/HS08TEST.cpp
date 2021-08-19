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
    int w;
    float t;
    scanf("%d%f",&w,&t);
    if(w+0.5>t)
    {
        printf("%.2f",t);       
    }
    else if(w%5!=0)
        printf("%.2f",t);
    else
        printf("%.2f",t-w-0.5);  
}

int main()
{
    solve();
    return 0;
}