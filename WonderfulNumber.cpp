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

bool IsEven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Binary(int n)
{
    int mod;
    string s1, s2;
    while (n)
    {
        mod = n % 2;
        n = n / 2;
        if (mod == 0)
        {
            s1 += "0";
        }
        else
        {
            s1 += "1";
        }
    }
    s2 = s1;

    reverse(s2.begin(), s2.end());
    if (s2 == s1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    op;

    int n;
    cin >> n;
    if (IsEven(n))
    {
        cout << "NO" << endl;
    }
    else
    {
        if (Binary(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
