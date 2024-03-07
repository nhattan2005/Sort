#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+10;
int n;
double a[N];
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    for(int i = 1; i <= n; i++)
        cout << a[i] << " ";
}
