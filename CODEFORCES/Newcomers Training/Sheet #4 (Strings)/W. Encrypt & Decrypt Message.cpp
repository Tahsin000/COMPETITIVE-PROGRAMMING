#include<bits/stdc++.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char s[]="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    char s1[]= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char test[999999];
    int i,j, n;
    cin >> n;
    if (n == 1){
       scanf("%s", test);
        for (i=0; test[i]; i++){
            for (j=0; s1[j]; j++){
                if (test[i] == s1[j]){
                    cout << s[j];
                    break;
                }
            }
        }
        cout << endl;
    }
    else if (n == 2){

        scanf("%s", test);
        for (i=0; test[i]; i++){
            for (j=0; s[j]; j++){
                if (test[i] == s[j]){
                    cout << s1[j];
                    break;
                }
            }
        }
        cout << endl;
    }

    /// abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789
    /// PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/
    return 0;
}