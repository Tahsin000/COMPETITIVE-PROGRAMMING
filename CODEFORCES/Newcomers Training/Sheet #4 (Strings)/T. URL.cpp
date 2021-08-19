#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10010];
    int i, j;
    gets(s);
    for (i=0; s[i]; i++){
        if (s[i]=='='&&s[i-1]=='e'&&s[i-2]=='m'&&s[i-3]=='a'&&s[i-4]=='n'&&s[i-5]=='r'&&s[i-6]=='e'&&s[i-7]=='s'&&s[i-8]=='u'){ ///username=
            cout << "username: ";
            for (j=i+1; s[j] != '&'; j++)
                cout << s[j];
            cout << endl;
        }
        else if (s[i]=='='&&s[i-1]=='d'&&s[i-2]=='w'&&s[i-3]=='p'){
             cout << "pwd: ";
            for (j=i+1; s[j] != '&'; j++)
                cout << s[j];
            cout << endl;
        }
        else if (s[i]=='='&&s[i-1]=='e'&&s[i-2]=='l'&&s[i-3]=='i'&&s[i-4]=='f'&&s[i-5]=='o'&&s[i-6]=='r'&&s[i-7]=='p'){  ///profile=
             cout << "profile: ";
            for (j=i+1; s[j] != '&'; j++)
                cout << s[j];
            cout << endl;
        }
        else if (s[i]=='='&&s[i-1]=='e'&&s[i-2]=='l'&&s[i-3]=='o'&&s[i-4]=='r'){  ///role=
             cout << "role: ";
            for (j=i+1; s[j] != '&'; j++)
                cout << s[j];
            cout << endl;
        }
        else if (s[i]=='='&&s[i-1]=='y'&&s[i-2]=='e'&&s[i-3]=='k'){  ///key=
             cout << "key: ";
            for (j=i+1; s[j] != '\0'; j++)
                cout << s[j];
            cout << endl;
        }
}
    return 0;
}