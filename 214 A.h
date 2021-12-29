#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int N = 20;   int a[N];
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m, k=0,b;
    cin >> n >> m;
    for (int a = 0; a*a <= n; a++) {
        b = n - a * a;
        if (m == a + b * b)   k++;
 
    }
    cout << k;
    return 0;
}