#include<bits/stdc++.h>
using namespace std;

void fun(int n)
{
    static int a = n;
    if (n == 1) return ;
    n--;
    for(int i=1; i<n; i++)
        cout << " ";

    for(int i=0; i<a-n; i++)
        cout << "*";

    for(int i=1; i<a-n; i++)
        cout << "*";
    cout << endl;
    fun(n);
}

int main()
{
    int n ;
    cin >> n;
    fun(n+1);
    return 0;
}