#include<iostream>
using namespace std;
int main()
{
    long long a,b,c,d,tmp;
    cin >> a >> b >> c >> d ;
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    tmp = (a*b*c*d)%100;

    if (tmp >= 10)
        cout << tmp << endl;
    else
        cout << "0" << tmp << endl;
    return 0;
}