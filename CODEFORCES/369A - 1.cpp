#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, b , p;
    cin >> n >> b >> p;
    int a[10+n], useP=0, i, useB=0;
    for (i=0; i<n; i++){
        cin >> a[i];
    }


    for (i=0; i<n; i++){
        if (a[i] == 1)
            useB++;
        else {
            if ((p-useP) <= 0)
                useB++;
            else
                useP++;
        }
    }

    b -= useB;
    p -=  useP;

    if (b > p){
        if (p < 0)
            cout << abs(p) <<  endl;
        else
            cout << "0" << endl;
    }
    else {
        if (b < 0)
            cout << abs(b) << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}
