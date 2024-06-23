#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define op                   \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define f(n) for (int i = 0; i < n; i++)

int main()
{
    op;
    int n, m;
    while (1)
    {

        cin >> n >> m;
        if (n <= 0 || m <= 0)
        {
            break;
        }
        int maxi = max(n, m);
        int sum = 0;
        if (n == maxi)
        {
            for (int i = m; i <= n; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
        }
        else if (m == maxi)
        {
            for (int i = n; i <= m; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;
        }

        
    }
}
