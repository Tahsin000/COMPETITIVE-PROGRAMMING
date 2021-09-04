 
#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    double ansx = fabs((x2-x1)*(x2-x1));
    double ansy = fabs((y2-y1)*(y2-y1));
    cout << setprecision(9) << fixed <<  sqrt(ansx + ansy) << endl;
    // printf("%.9lf\n",sqrt((fabs(x2-x1)*fabs(x2-x1))+(fabs(y2-y1)*fabs(y2-y1))));

    return 0;
}