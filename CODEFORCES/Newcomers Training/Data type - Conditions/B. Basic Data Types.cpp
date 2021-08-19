#include<stdio.h>
int main()
{
    int A;
    long long int B;
    char C;
    float D;
    double E;
 
    scanf("%d %lld %c %f %lf",&A,&B,&C,&D,&E);
    printf("%d\n%lld\n%c\n%.2f\n%.1f\n",A,B,C,D,E);
 
    return 0;
}