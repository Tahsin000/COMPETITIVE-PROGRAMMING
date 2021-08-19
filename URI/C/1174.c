#include<stdio.h>
int main()
{
    double arr[1000],old[1000];
    int i,count=0,pos[1000];
    for (i=0; i<100; i++) {
        scanf("%lf",&old[i]);
        if (old[i]<=10) {
            arr[count] = old[i];
            pos[count] = i;
            count++;
        }
    }
    for (i=0; i<count; i++)
        printf("A[%d] = %.1lf\n",pos[i],arr[i]);

    return 0;
}
