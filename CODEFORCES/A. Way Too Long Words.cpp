#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, a;
    char s[10010];
    cin >> n;
    for (i=0; i<n; i++){
        scanf("%s", s);
        a = strlen(s);
        if (a > 10){
            cout << s[0] << a-2 << s[a-1] << endl;
        }
        else
            printf("%s\n", s);

    }

    return 0;
}
