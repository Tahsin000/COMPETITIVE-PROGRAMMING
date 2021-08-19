#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int n,i,flag,tmp,a;
    cin >> a;
    while (a--)
    {
        cin >> n;
        tmp = sqrt(n);
        flag = 0;
        for (i=2; i<=tmp; i++)
        {
            if (n%i==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==1 || n == 1)
            cout << "NO" << endl ;
        else
            cout << "YES" << endl;
    }
    return 0;
}