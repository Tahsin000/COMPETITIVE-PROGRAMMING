#include<bits/stdc++.h>
int main()
{
    int n, i;
    scanf ("%d", &n);
    long long int arr[n+10], tmpMax = -1e9, tmpMin = 1e9;
    for (i=0; i<n; i++){
        scanf("%lld", &arr[i]);
        if (tmpMax <= arr[i])
            tmpMax = arr[i];
        if (arr[i] <= tmpMin)
            tmpMin = arr[i];
    }
    for (i=0; i<n; i++){
        if(tmpMin == arr[i])
            arr[i] = tmpMax;
        else if (tmpMax == arr[i])
            arr[i] = tmpMin;
        printf("%lld ", arr[i]);
    }
//        printf("%lld %lld", tmpMax, tmpMin);

    return 0;
}