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
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

int main()
{
    op;

    string s;
    cin >> s;
    if (s[0] % 2 == 0)
    {
        cout << "EVEN"<<endl;
    }
    else
    cout<<"ODD"<<endl;

    return 0;
}
