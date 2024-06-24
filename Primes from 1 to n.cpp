#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define op                   \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define f(n) for (int i = 0; i < n; i++)
#define endl '\n'

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    op;
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }

    return 0;
}
