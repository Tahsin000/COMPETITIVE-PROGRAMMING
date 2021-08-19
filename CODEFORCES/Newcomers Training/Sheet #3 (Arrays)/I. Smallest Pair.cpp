#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int m=0;m<t;m++){
        int n,c=0;
        cin>>n;
        int a[150],b[150];
        for(int p=1;p<=n;p++){
            cin>>a[p];
        }
        int tmp;
        int rem = 1e9;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                tmp = a[i]+a[j]+j-i;
                if (tmp < rem) rem = tmp;
//                cout << tmp <<  " ";
            }
        }
//        for(int i=0;i<c;i++){
//            if(temp>b[i]){
//                temp=b[i];
//            }
//        }
        cout<< rem << endl;
    }
    return 0;
}