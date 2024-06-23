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
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            cout << "1" << endl;
        }
        else
        {
            ll int sum = 0;
            for (int i = x; i >= 1; i--)
            {
                if (i == x)
                {
                    sum = i;
                }
                else
                {
                    sum *= i;
                }
            }
            cout << sum << endl;
        }
    }

    return 0;
}
