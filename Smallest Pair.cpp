#include <bits/stdc++.h>
using namespace std;
#define intl long long int
#define ld long double
#define op                   \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define f(n) for (int i = 0; i < n; i++)
#define endl '\n'

int main()
{
    op;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int v[n];
        f(n)
        {
            cin >> v[i];
        }

        int sum = INT_MAX;

        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1 ; j < n; j++)
            {
                sum=min(sum, (v[i]+v[j]+j-i));
            }
        }

        cout << sum << endl;
    }

    return 0;
}
