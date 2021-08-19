#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n==1)
        cout << "I hate it" << endl;
    else if (n == 2)
        cout << "I hate that I love it" << endl;
    else
    {
        if (n%2 != 0)
        {
            n -= 1;

             for (int i=1; i<n/2+1; i++)
            {
                cout << "I hate that I love that " ;
            }

            cout << "I hate it" << endl;
        }
        else if (n%2 == 0)
        {
            cout << "I hate that ";
            for (int i=1; i<n/2; i++)
            {
                cout << "I love that I hate that ";
            }
        cout << "I love it" << endl;
        }
    }

return 0;
}
