#include<bits/stdc++.h>
using namespace std;
int main()

{
    int arr[10][10], ai, aj, bi, bj;
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                ai = i;
                aj = j;
            }

        }
    }

//    cout << ai << "  "<<aj << endl;
//
//    for (int i=0; i<5; i++)
//    {
//        for (int j=0; j<5; j++)
//        {

            if (ai > 2 && aj > 2)
            {
                bi =ai - 2;
                bj =aj - 2;
            }
            else if (ai > 2 && aj < 2)
            {
                bi =ai - 2;
                bj = 2 - aj;
            }
            else if (ai < 2 && aj > 2)
            {
                bi = 2 - ai;
                bj =aj- 2;
            }
            else if (ai < 2 && aj < 2)
            {
                bi = 2 - ai;
                bj = 2 - aj;
            }
            else if (ai > 2 && aj == 2)
            {
                bi = ai - 2;
                bj = 0;
            }
            else if (ai < 2 && aj == 2 )
            {
                bi = 2 - ai;
                bj = 0;
            }

            else if (ai == 2 && aj > 2)
            {
                bj =aj - 2;
                bi = 0;
            }
            else if (ai == 2 && aj < 2 )
            {
                bj = 2 - aj;
                bi = 0;
            }
            else if ( ai == 2 && aj == 2)
            {
                bi = 0;
                bj = 0;
            }
//        }
//    }
    cout << bi + bj << endl;

    return 0;
}