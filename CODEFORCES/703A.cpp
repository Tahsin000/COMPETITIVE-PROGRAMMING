#include<iostream>
 
using namespace std;
int main()
{
    int n, A, B, sumA=0 , sumB=0;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> A >> B;
        if (A > B)
            sumA++;
        else if (A < B)
            sumB++;
    }
    if (sumA == sumB) cout << "Friendship is magic!^^" << endl;
    else if (sumA > sumB) cout << "Mishka" << endl;
    else if (sumA < sumB) cout << "Chris" << endl;
    return 0;
}
