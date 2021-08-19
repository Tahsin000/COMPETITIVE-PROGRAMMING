#include<bits/stdc++.h>
using namespace std;
    char str[2000900];
int main()
{
    int n, E=0, G=0, Y=0, P=0, T=0, arr[10], Min = 1e9;
    cin >> str;
    for (int i=0; str[i]; i++)
    {
        if (str[i] == 'e' || str[i] == 'E')
            E++;

        if (str[i] == 'g' || str[i] == 'G')
            G++;

        if (str[i] == 'y' || str[i] == 'Y')
            Y++;

        if (str[i] == 'p' || str[i] == 'P')
            P++;

        if (str[i] == 't' || str[i] == 'T')
            T++;

    }
    arr[0] = E;
    arr[1] = G;
    arr[2] = Y;
    arr[3] = P;
    arr[4] = T;

    for (int i=0; i<5; i++)
    {
        if (Min > arr[i])
            Min = arr[i];
    }

    cout << Min << endl;
    return 0;
}