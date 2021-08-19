#include <iostream>
using namespace std;

int main()
{
 	int n;
 	cin >> n;
 	while (n --)
 	{
 		 long long int a, b;
    cin >> a >> b;
    long long int ans  = 2 * a;

    ( ans <= b) ? cout << a << " " << ans << endl : cout << -1 << " " << -1 << endl;
    
	}

    return 0;
}