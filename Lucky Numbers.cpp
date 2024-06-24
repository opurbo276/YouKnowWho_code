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

bool LuckyNumbers(int a)
{
    string s = to_string(a);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '4' && s[i] != '7')
        {
            return false;
        }
    }

    return 1;
}

int main()
{
    op;

    int a, b;
    cin >> a >> b;
    int flag = 0;
    for (int i = a; i <= b; i++)
    {
        if (LuckyNumbers(i))
        {
            flag = 1;
            cout << i << " ";
        }
    }

    if (flag == 0)
    {
        cout << "-1" << endl;
    }

    return 0;
}
