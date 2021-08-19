#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i,A=0;
    cin>>n>>a;
    for(i=1;i<=n;i++)
    {
        if(a%i==0 && a/i<=n)
        {
            A++;
        }
    }
    cout<<A<<endl;
    return 0;
}