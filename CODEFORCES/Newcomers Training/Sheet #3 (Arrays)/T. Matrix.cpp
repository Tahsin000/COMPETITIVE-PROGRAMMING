#include<stdio.h>
int main()
{
    long long int s,n,k,i,j,arr[110][110],f=0;
    scanf("%lld",&n);
    scanf("%lld",&k);
 
        for (i=0; i<n; i++){
            for (j=0; j<k; j++)
                scanf("%lld",&arr[i][j]);
        }
 
    scanf("%lld",&s);
        
        for (i=0; i<n; i++){
            for (j=0; j<k; j++){
                if (arr[i][j]==s){
                    f=1;
                    break;
                }
            }
            if (f==1){
                break;
            }
        }
 
        if (f==1)
            printf("will not take number\n");
        else
            printf("will take number\n");
 
    return 0;
}