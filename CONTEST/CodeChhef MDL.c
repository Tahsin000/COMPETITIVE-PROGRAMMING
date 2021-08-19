#include<stdio.h>
int main ()
{
    int n, i , arr[10010], a, tmp_max, tmp_min, j, f ;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &a);
        f = 0;
        for (i=0; i<a; i++)
            scanf("%d", &arr[i]);
        tmp_min = tmp_max = arr[0];
        for (i=0; i<a; i++){
            if (tmp_max <= arr[i])
                tmp_max = arr[i];

            if (tmp_min >= arr[i])
                tmp_min = arr[i];
        }

        for (i=0; i<a; i++){
            for (j=0; j<n; j++){
                if (tmp_max == arr[i]){
                        f = 1;
                    break;
                }
                else if (tmp_min == arr[i]){
                    f = 2;
                    break;
                }
            }
            if ( f == 1 || f == 2)
                break;
        }
        (f == 2 ) ? printf("%d %d\n",tmp_min,tmp_max) : printf("%d %d\n",tmp_max,tmp_min);
    }
    
    return 0;
}
